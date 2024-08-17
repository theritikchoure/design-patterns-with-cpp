#ifndef COMPUTER_BUILDER_HPP
#define COMPUTER_BUILDER_HPP

#include "Computer.hpp"
#include <memory>

// The 'Builder' interface declares methods for creating different parts of a 'Product'.
class ComputerBuilder
{
public:
    // Abstract methods to build different parts of the computer
    virtual void buildCPU() = 0;
    virtual void buildRAM() = 0;
    virtual void buildStorage() = 0;

    // Returns the constructed 'Computer' object
    virtual std::unique_ptr<Computer> getComputer() = 0;

    virtual ~ComputerBuilder() = default;
};

#endif // COMPUTER_BUILDER_HPP
