#include <iostream>
#include <string>

using namespace std;

class GameSetting
{
    static GameSetting *_instance;
    int _brightness;
    int _width;
    int _height;

    GameSetting()
    {
        _width = 786;
        _brightness = 548;
        _height = 1024;
    }

public:
    static GameSetting *getInstance()
    {
        if (_instance == NULL)
            _instance = new GameSetting();

        return _instance;
    }

    void setWidth(int width)
    {
        _width =
            width;
    }

    int getWidth()
    {
        return _width;
    }

    void displaySetting()
    {
        cout << "Brightness: " << _brightness << endl;
        cout << "Width: " << _width << endl;
        cout << "Height: " << _height << endl;
    }
};

GameSetting *GameSetting::_instance = NULL;
int main()
{
    GameSetting *gameSetting = GameSetting::getInstance();
    gameSetting->displaySetting();
    GameSetting *gameSetting1 = GameSetting::getInstance();
    gameSetting1->setWidth(99999);
    gameSetting1->displaySetting();
    return 0;
}