/*
Problem: Building a House

We want to build different types of houses with various features, such as the number of rooms, the presence of a garage, a swimming pool, and a garden.
The construction process for these features should be flexible and allow for different combinations.

This implementation uses the Builder Design Pattern to construct complex `House` objects with various features.
*/

#include <iostream>
#include <string>
#include <memory>

using namespace std;

/*
 * Class: House
 * Purpose: Represents a complex object that can have various features such as rooms, a garage, a swimming pool, and a garden.
 */
class House
{
private:
    int rooms;            // Number of rooms in the house
    bool hasGarage;       // Indicates whether the house has a garage
    bool hasSwimmingPool; // Indicates whether the house has a swimming pool
    bool hasGarden;       // Indicates whether the house has a garden

public:
    // Setters for configuring the house's features
    void setRooms(int pRooms) { this->rooms = pRooms; }
    void setGarage(bool pHasGarage) { this->hasGarage = pHasGarage; }
    void setSwimmingPool(bool pHasSwimmingPool) { this->hasSwimmingPool = pHasSwimmingPool; }
    void setGarden(bool pHasGarden) { this->hasGarden = pHasGarden; }

    // Display the house's features
    void showHouse() const
    {
        cout << "House with " << rooms << " rooms" << endl;
        if (hasGarage)
            cout << "has a garage" << endl;
        if (hasSwimmingPool)
            cout << "has a swimming pool" << endl;
        if (hasGarden)
            cout << "has a garden" << endl;
    }
};

/*
 * Interface: HouseBuilder
 * Purpose: Abstract interface for building different parts of a House object.
 *
 * This interface defines the blueprint for constructing a House with specific features.
 * Concrete implementations of this interface will build the actual House object.
 */
class HouseBuilder
{
public:
    virtual void buildRooms(int number) = 0; // Builds the specified number of rooms
    virtual void buildGarage() = 0;          // Adds a garage to the house
    virtual void buildSwimmingPool() = 0;    // Adds a swimming pool to the house
    virtual void buildGarden() = 0;          // Adds a garden to the house

    // Returns the constructed house object
    virtual unique_ptr<House> getHouse() = 0;

    // Virtual destructor to ensure proper cleanup of derived classes
    virtual ~HouseBuilder() = default;
};

/*
 * Class: ConcreteHouseBuilder
 * Purpose: Concrete implementation of the HouseBuilder interface that constructs a House object step by step.
 *
 * This class provides the actual construction logic for building different features of the House.
 */
class ConcreteHouseBuilder : public HouseBuilder
{
private:
    unique_ptr<House> house; // The house object being constructed

public:
    // Constructor initializes a new House object
    ConcreteHouseBuilder()
    {
        reset();
    }

    // Resets the builder to start constructing a new House
    void reset()
    {
        house = make_unique<House>();
    }

    // Builds the specified number of rooms in the House
    void buildRooms(int number) override
    {
        house->setRooms(number);
    }

    // Adds a garage to the House
    void buildGarage() override
    {
        house->setGarage(true);
    }

    // Adds a swimming pool to the House
    void buildSwimmingPool() override
    {
        house->setSwimmingPool(true);
    }

    // Adds a garden to the House
    void buildGarden() override
    {
        house->setGarden(true);
    }

    // Returns the constructed House object
    unique_ptr<House> getHouse() override
    {
        return move(house);
    }
};

/*
 * Class: HouseDirector
 * Purpose: Controls the construction process of a House using the HouseBuilder interface.
 *
 * The HouseDirector defines the steps to build different types of houses (e.g., basic or luxury),
 * without knowing the specifics of how the houses are built.
 */
class HouseDirector
{
private:
    HouseBuilder &builder; // Reference to the builder used for constructing the house

public:
    // Constructor takes a reference to a HouseBuilder
    HouseDirector(HouseBuilder &builder) : builder(builder) {}

    // Constructs a basic house with minimal features
    void buildBasicHouse()
    {
        builder.buildRooms(3);
    }

    // Constructs a luxury house with additional features
    void buildLuxuryHouse()
    {
        builder.buildRooms(5);
        builder.buildGarage();
        builder.buildSwimmingPool();
        builder.buildGarden();
    }
};

int main()
{
    // Create a concrete builder for constructing houses
    ConcreteHouseBuilder builder;

    // Create a director to control the construction process
    HouseDirector director(builder);

    // Build and display a basic house
    director.buildBasicHouse();
    unique_ptr<House> basicHouse = builder.getHouse();
    basicHouse->showHouse();

    // Reset the builder to prepare for constructing a new house
    builder.reset();

    cout << "-------------------------------------------" << endl;

    // Build and display a luxury house
    director.buildLuxuryHouse();
    unique_ptr<House> luxuryHouse = builder.getHouse();
    luxuryHouse->showHouse();

    return 0;
}
