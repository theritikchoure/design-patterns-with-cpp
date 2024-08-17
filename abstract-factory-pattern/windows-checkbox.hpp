#ifndef WINDOWS_CHECKBOX_HPP
#define WINDOWS_CHECKBOX_HPP

#include "checkbox.hpp"

// Concrete Product: WindowsCheckbox
class WindowsCheckbox : public Checkbox
{
public:
    void render() const override
    {
        std::cout << "Rendering Windows Checkbox." << std::endl;
    }
};

#endif // WINDOWS_CHECKBOX_HPP
