/*
Problem Statement: 
    Cross-Platform Dialog Box Rendering
Context:
    In a cross-platform application, user interfaces need to be adapted to different operating systems or environments. 
    For instance, a dialog box in a Windows application may look and behave differently compared to a dialog box in a web-based application. 
    To manage this complexity, a design pattern is required that allows the application to create and render UI components (such as buttons) appropriate 
    to the current platform without modifying the core business logic.
*/

#include <iostream>
#include <stdexcept>
#include <memory>

using namespace std;

//Button interface
class Button
{
public:
    virtual void render() = 0; // Pure virtual function
    virtual void onClick() = 0; // Pure virtual function
    virtual ~Button() = default;      // Virtual destructor
};

class WindowsButton: public Button {
    public:
        void render() override {
            cout << "Rendering a windows button" << endl;
        }

        void onClick() override {
            cout << "Windows button clicked" << endl;
        }
};

class WebButton: public Button {
    public:
        void render() override {
            cout << "Rendering a web button" << endl;
        }

        void onClick() override {
            cout << "Web button clicked" << endl;
        }
};


class Dialog {
    public:
        virtual unique_ptr<Button> createButton() = 0;


        void render() {
            unique_ptr<Button> okButton = createButton();

            okButton->onClick();
            okButton->render();
        }

        virtual ~Dialog() = default;
};


class WindowsDialog: public Dialog {
    public:
        unique_ptr<Button> createButton() override {
            return make_unique<WindowsButton>();
        }
};

class WebDialog: public Dialog {
    public:
        unique_ptr<Button> createButton() override {
            return make_unique<WebButton>();
        }
};


class Application {
    private:
        unique_ptr<Dialog> dialog;

    public:
        void initialize() {
            string configOs = "web";

            if(configOs == "windows") {
                dialog = make_unique<WindowsDialog>();
            } else if(configOs == "web") {
                dialog = make_unique<WebDialog>();
            } else {
                throw runtime_error("Error! unkown operating system");
            }
        }


        void main() {
            this->initialize();
            dialog->render();
        }
};

int main()
{
    Application app;

    app.main();

    return 0;
}