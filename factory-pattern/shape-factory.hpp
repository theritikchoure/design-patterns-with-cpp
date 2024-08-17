#ifndef SHAPEFACTORY_HPP
#define SHAPEFACTORY_HPP

#include "shape.hpp"
#include <memory>
#include <string>

// ShapeFactory class
class ShapeFactory
{
public:
    // Factory method to create shapes
    static std::unique_ptr<Shape> createShape(const std::string &type)
    {
        if (type == "circle")
        {
            return std::make_unique<Circle>();
        }
        else if (type == "rectangle")
        {
            return std::make_unique<Rectangle>();
        }
        else
        {
            return nullptr;
        }
    }
};

#endif // SHAPEFACTORY_HPP
