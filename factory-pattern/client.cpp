#include "shape-factory.hpp"

int main()
{
    // Creating a Circle using the factory
    std::unique_ptr<Shape> circle = ShapeFactory::createShape("circle");
    if (circle)
    {
        circle->draw(); // Output: Drawing a Circle.
    }

    // Creating a Rectangle using the factory
    std::unique_ptr<Shape> rectangle = ShapeFactory::createShape("rectangle");
    if (rectangle)
    {
        rectangle->draw(); // Output: Drawing a Rectangle.
    }

    // Trying to create an unknown shape
    std::unique_ptr<Shape> unknown = ShapeFactory::createShape("triangle");
    if (!unknown)
    {
        std::cout << "Unknown shape type." << std::endl;
    }

    return 0;
}
