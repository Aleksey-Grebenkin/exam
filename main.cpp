#include <iostream>

#include <vector>

#include "box.h"

using namespace std;

int main()
{
    vector<Box> vectorBox;
    
    Box box1(1,2,3);
    Box box2(2,1,4);
    Box box3(3,2,9);
    
    vectorBox.push_back(box1);
    vectorBox.push_back(box2);
    vectorBox.push_back(box3);
    
    for (int i=0;i<3;i++)
    {
        cout << i+1 << " Коробка" << endl;
        vectorBox[i].Show();
        cout << endl;
    }
    
    vectorBox[0].Repaint(Box::COLOR::BLUE);
    vectorBox[1].Repaint(Box::COLOR::RED);
    vectorBox[2].Repaint(Box::COLOR::WHITE);
    
    for (int i=0;i<3;i++)
    {
        cout << i+1 << " Коробка" << endl;
        vectorBox[i].Show();
        cout << endl;
    }
    
    return 0;
}
