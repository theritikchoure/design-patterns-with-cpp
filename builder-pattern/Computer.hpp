#ifndef COMPUTER_HPP
#define COMPUTER_HPP

#include <string>
#include <iostream>

// The 'Product' class that is being built.
class Computer
{
public:
    // Setters for different components
    void setCPU(const std::string &cpu) { CPU = cpu; }
    void setRAM(const std::string &ram) { RAM = ram; }
    void setStorage(const std::string &storage) { Storage = storage; }

    // Displays the computer configuration
    void show() const
    {
        std::cout << "Computer Configuration: \n";
        std::cout << "CPU: " << CPU << "\n";
        std::cout << "RAM: " << RAM << "\n";
        std::cout << "Storage: " << Storage << "\n";
    }

private:
    std::string CPU;
    std::string RAM;
    std::string Storage;
};

#endif // COMPUTER_HPP
