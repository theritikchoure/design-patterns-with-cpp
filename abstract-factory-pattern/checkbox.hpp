#ifndef CHECKBOX_HPP
#define CHECKBOX_HPP

#include <iostream>

// Abstract Product: Checkbox
class Checkbox
{
public:
    virtual void render() const = 0; // Pure virtual function
    virtual ~Checkbox() = default;   // Virtual destructor
};

#endif // CHECKBOX_HPP
