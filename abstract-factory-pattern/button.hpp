#ifndef BUTTON_HPP
#define BUTTON_HPP

#include <iostream>

// Abstract Product: Button
class Button
{
public:
    virtual void render() const = 0; // Pure virtual function
    virtual ~Button() = default;     // Virtual destructor
};

#endif // BUTTON_HPP
