#ifndef MAC_FACTORY_HPP
#define MAC_FACTORY_HPP

#include "gui-factory.hpp"
#include "mac-button.hpp"
#include "mac-checkbox.hpp"

// Concrete Factory: MacFactory
class MacFactory : public GUIFactory
{
public:
    std::unique_ptr<Button> createButton() const override
    {
        return std::make_unique<MacButton>();
    }

    std::unique_ptr<Checkbox> createCheckbox() const override
    {
        return std::make_unique<MacCheckbox>();
    }
};

#endif // MAC_FACTORY_HPP
