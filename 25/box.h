#pragma once

class Box
{
public:
    
    enum class COLOR
    {
        RED,
        BLUE,
        GREEN,
        YELLOW,
        WHITE,
        BLACK
    };
    
    Box(double width=0, double length=0, double height=0, COLOR color=COLOR::BLACK);
    
    void Show();
    
    void Repaint (COLOR color);
    
private:
    
    double width;
    
    double length;
    
    double height;
    
    COLOR color;
};

