#ifndef MAC_CHECKBOX_HPP
#define MAC_CHECKBOX_HPP

#include "checkbox.hpp"

// Concrete Product: MacCheckbox
class MacCheckbox : public Checkbox
{
public:
    void render() const override
    {
        std::cout << "Rendering Mac Checkbox." << std::endl;
    }
};

#endif // MAC_CHECKBOX_HPP
