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
    
    Box(int width=0, int length=0, int height=0, COLOR color=COLOR::BLACK);
    
    void Show();
    
    void Repaint (COLOR color);
    
private:
    
    int width;
    
    int length;
    
    int height;
    
    COLOR color;
};

