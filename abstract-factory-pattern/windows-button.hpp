#ifndef WINDOWS_BUTTON_HPP
#define WINDOWS_BUTTON_HPP

#include "Button.hpp"

// Concrete Product: WindowsButton
class WindowsButton : public Button
{
public:
    void render() const override
    {
        std::cout << "Rendering Windows Button." << std::endl;
    }
};

#endif // WINDOWS_BUTTON_HPP
