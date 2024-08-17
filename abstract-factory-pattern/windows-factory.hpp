#ifndef WINDOWS_FACTORY_HPP
#define WINDOWS_FACTORY_HPP

#include "gui-factory.hpp"
#include "windows-button.hpp"
#include "windows-checkbox.hpp"

// Concrete Factory: WindowsFactory
class WindowsFactory : public GUIFactory
{
public:
    std::unique_ptr<Button> createButton() const override
    {
        return std::make_unique<WindowsButton>();
    }

    std::unique_ptr<Checkbox> createCheckbox() const override
    {
        return std::make_unique<WindowsCheckbox>();
    }
};

#endif // WINDOWS_FACTORY_HPP
