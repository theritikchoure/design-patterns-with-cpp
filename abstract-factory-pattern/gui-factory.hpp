#ifndef GUI_FACTORY_HPP
#define GUI_FACTORY_HPP

#include <memory>
#include "button.hpp"
#include "checkbox.hpp"

// Abstract Factory Interface
class GUIFactory
{
public:
    virtual std::unique_ptr<Button> createButton() const = 0;
    virtual std::unique_ptr<Checkbox> createCheckbox() const = 0;
    virtual ~GUIFactory() = default;
};

#endif // GUI_FACTORY_HPP
