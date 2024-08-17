#include "gui-factory.hpp"
#include "windows-factory.hpp"
#include "mac-factory.hpp"

void renderUI(const GUIFactory &factory)
{
    std::unique_ptr<Button> button = factory.createButton();
    std::unique_ptr<Checkbox> checkbox = factory.createCheckbox();

    button->render();
    checkbox->render();
}

int main()
{
    std::cout << "Windows UI:" << std::endl;
    WindowsFactory windowsFactory;
    renderUI(windowsFactory);

    std::cout << "\nMac UI:" << std::endl;
    MacFactory macFactory;
    renderUI(macFactory);

    return 0;
}
