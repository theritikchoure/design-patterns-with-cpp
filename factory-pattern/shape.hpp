#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <iostream>

// Base class
class Shape
{
public:
    virtual void draw() const = 0; // Pure virtual function
    virtual ~Shape() = default;    // Virtual destructor
};

// Concrete class: Circle
class Circle : public Shape
{
public:
    void draw() const override
    {
        std::cout << "Drawing a Circle." << std::endl;
    }
};

// Concrete class: Rectangle
class Rectangle : public Shape
{
public:
    void draw() const override
    {
        std::cout << "Drawing a Rectangle." << std::endl;
    }
};

#endif // SHAPE_HPP
