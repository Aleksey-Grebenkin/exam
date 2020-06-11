#include <iostream>
#include "vector.h"

using namespace std;
int main()
{
    Vector vector1(1,2,3);
    Vector vector2(7,8,9);
    Vector vector3(4,5,6);
    
    if (vector1<vector2)
        cout<<"Вектор 1 меньше вектроа 2"<<endl;
    else
        cout<<"Вектор 1 не меньше вектроа 2"<<endl;
    
    if (vector1<vector3)
        cout<<"Вектор 1 меньше вектроа 3"<<endl;
    else
        cout<<"Вектор 1 не меньше вектроа 3"<<endl;
    
    if (vector2<vector3)
        cout<<"Вектор 2 меньше вектроа 3"<<endl;
    else
        cout<<"Вектор 2 не меньше вектроа 3"<<endl;
}
