#include "GamingComputerBuilder.hpp"
#include "Director.hpp"

int main()
{
    // Create a builder for a gaming computer
    GamingComputerBuilder builder;

    // Create a director and pass it the builder
    Director director(&builder);

    // Use the director to construct the computer
    director.construct();

    // Get the constructed computer and show its configuration
    std::unique_ptr<Computer> computer = builder.getComputer();
    computer->show();

    return 0;
}
