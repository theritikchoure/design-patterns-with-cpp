#ifndef DIRECTOR_HPP
#define DIRECTOR_HPP

#include "ComputerBuilder.hpp"

// The 'Director' class defines the order in which to call the building steps.
class Director
{
public:
    Director(ComputerBuilder *builder) : builder(builder) {}

    // Construct the product using the builder
    void construct()
    {
        builder->buildCPU();
        builder->buildRAM();
        builder->buildStorage();
    }

private:
    ComputerBuilder *builder; // A reference to the builder
};

#endif // DIRECTOR_HPP
