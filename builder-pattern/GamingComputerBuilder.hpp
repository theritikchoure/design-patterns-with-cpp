#ifndef GAMING_COMPUTER_BUILDER_HPP
#define GAMING_COMPUTER_BUILDER_HPP

#include "ComputerBuilder.hpp"

// The 'ConcreteBuilder' class implements the 'Builder' interface and provides specific implementations
// for constructing the parts of the product.
class GamingComputerBuilder : public ComputerBuilder
{
public:
    GamingComputerBuilder() : computer(std::make_unique<Computer>()) {}

    // Sets the CPU for a gaming computer
    void buildCPU() override
    {
        computer->setCPU("Intel Core i9-11900K");
    }

    // Sets the RAM for a gaming computer
    void buildRAM() override
    {
        computer->setRAM("32GB DDR4");
    }

    // Sets the storage for a gaming computer
    void buildStorage() override
    {
        computer->setStorage("1TB SSD");
    }

    // Returns the constructed 'Computer' object
    std::unique_ptr<Computer> getComputer() override
    {
        return std::move(computer);
    }

private:
    std::unique_ptr<Computer> computer;
};

#endif // GAMING_COMPUTER_BUILDER_HPP
