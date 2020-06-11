#include "box.h"
#include "iostream"
using namespace std;
Box::Box(int width, int length, int height, COLOR color)
{
    this->width = width;
    this->length = length;
    this->height = height;
    this->color = color;
}

 
void Box::Show()
{
    cout << "Ширина: " << width << endl;
    cout << "Длина: " << length << endl;
    cout << "Высота: " << height << endl;
    cout << "Цвет: ";
    switch (color) {
        case COLOR::RED:
            cout << "Красный";
            break;
            
        case COLOR::BLUE:
            cout << "Голубой";
            break;
        
        case COLOR::GREEN:
            cout << "Зеленый";
            break;
            
        case COLOR::YELLOW:
            cout << "Желтый";
            break;
            
        case COLOR::WHITE:
            cout << "Белый";
            break;
            
        case COLOR::BLACK:
            cout << "Черный";
            break;
    }
    cout << endl;
}
 
void Box::Repaint (COLOR color)
{
    this->color=color;
}
