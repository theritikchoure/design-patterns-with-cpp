#ifndef MAC_BUTTON_HPP
#define MAC_BUTTON_HPP

#include "button.hpp"

// Concrete Product: MacButton
class MacButton : public Button
{
public:
    void render() const override
    {
        std::cout << "Rendering Mac Button." << std::endl;
    }
};

#endif // MAC_BUTTON_HPP
