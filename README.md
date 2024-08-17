# Design Patterns with CPP

Design patterns are proven, reusable solutions to common problems that software developers face during the design and implementation phases of software development. These patterns are not finished designs that can be directly transformed into code but are templates that guide how to solve specific issues in object-oriented software development.

## Why Do We Need Design Patterns?
In software engineering, the design phase often involves tackling complex problems that can have multiple possible solutions. Without a structured approach, this can lead to the development of software that is difficult to maintain, extend, or reuse. Design patterns provide a standardized way to address these challenges, ensuring that solutions are both effective and efficient.

## Problems Solved by Design Patterns
- Code Reusability: Design patterns promote code reuse by providing generalized solutions to recurring problems. This reduces the need to solve the same problem multiple times, thereby speeding up development and improving consistency across projects.

- Maintainability: By following design patterns, developers can create software that is easier to maintain. Patterns often encapsulate complex behavior in a way that isolates changes, meaning that modifications in one part of the system are less likely to cause issues elsewhere.

- Flexibility and Scalability: Design patterns help build systems that are flexible and scalable. They allow for future changes and extensions without requiring significant modifications to the existing codebase, making it easier to accommodate new requirements.

- Communication: Design patterns provide a shared vocabulary for developers. When developers use design patterns, they can describe solutions more succinctly and understand each other’s code more quickly, facilitating better collaboration and knowledge sharing.

- Best Practices: Design patterns are often considered best practices, distilled from years of experience in software development. By using these patterns, developers can avoid common pitfalls and make use of tried-and-true solutions that have been proven effective in various contexts.

- Object-Oriented Design: Many design patterns are specifically geared towards object-oriented design, helping to solve problems related to object creation, communication, and management. This is especially important in modern software development, where object-oriented programming is the dominant paradigm.

## Common Design Patterns

All patterns can be categorized by their intent, or purpose. This covers three main groups of patterns:

| **Design Pattern**               | **Intention**     | 
|------------------------|------------------------|
| Creational patterns                | provide object creation mechanisms that increase flexibility and reuse of existing code.  |
| Structural patterns                | 1. describe how classes and objects can be composed to form larger structures. <br/> 2. explain how to assemble objects and classes into larger structures, while keeping these structures flexible and efficient. |
| Behavioral patterns                | take care of effective communication and the assignment of responsibilities between objects. |

Design patterns in software engineering are generally categorized into three main types:

| **Type**               | **Design Pattern**     | **Purpose**                                                                                               |
|------------------------|------------------------|------------------------------------------------------------------------------------------------------------|
| **Creational Patterns** | **Singleton**          | Ensures a class has only one instance and provides a global point of access to it.                          |
|                        | **Factory Method**     | Defines an interface for creating an object but lets subclasses alter the type of objects that will be created. |
|                        | **Abstract Factory**   | Provides an interface for creating families of related or dependent objects without specifying their concrete classes. |
|                        | **Builder**            | Separates the construction of a complex object from its representation so that the same construction process can create different representations. (complex object with different configurations)|
|                        | **Prototype**          | Specifies the kinds of objects to create using a prototypical instance and creates new objects by copying this prototype. |
| **Structural Patterns** | **Adapter**            | Converts the interface of a class into another interface clients expect.                                           |
|                        | **Bridge**             | Decouples an abstraction from its implementation so that the two can vary independently.                    |
|                        | **Composite**          | Composes objects into tree structures to represent part-whole hierarchies.                                  |
|                        | **Decorator**          | Attaches additional responsibilities to an object dynamically.                                             |
|                        | **Facade**             | Provides a unified interface to a set of interfaces in a subsystem, making it easier to use.                |
|                        | **Flyweight**          | Uses sharing to support large numbers of fine-grained objects efficiently.                                  |
|                        | **Proxy**              | Provides a surrogate or placeholder for another object to control access to it.                             |
| **Behavioral Patterns** | **Observer**           | Defines a one-to-many dependency between objects so that when one object changes state, all dependents are notified and updated automatically. |
|                        | **Strategy**           | Defines a family of algorithms, encapsulates each one, and makes them interchangeable.                      |
|                        | **Command**            | Encapsulates a request as an object, allowing for parameterization of clients with different requests.      |
|                        | **Chain of Responsibility** | Passes a request along a chain of handlers, each deciding to process the request or pass it along.       |
|                        | **Interpreter**        | Defines a representation for a language's grammar and uses it to interpret sentences in the language.       |
|                        | **Iterator**           | Provides a way to access the elements of an aggregate object sequentially without exposing its underlying representation. |
|                        | **Mediator**           | Encapsulates how a set of objects interact, promoting loose coupling by preventing direct references.       |
|                        | **Memento**            | Captures and externalizes an object's internal state without violating encapsulation, allowing the object to be restored later. |
|                        | **State**              | Allows an object to alter its behavior when its internal state changes, appearing to change its class.      |
|                        | **Template Method**    | Defines the skeleton of an algorithm, allowing subclasses to redefine certain steps without changing the algorithm’s structure. |
|                        | **Visitor**            | Represents an operation to be performed on elements of an object structure, allowing new operations without changing the classes. |



## Resources - 

- [Design Patterns - refactoring.guru](https://refactoring.guru/design-patterns)
- [Patterns.dev](https://www.patterns.dev/)