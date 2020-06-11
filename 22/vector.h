#pragma once

class Vector
{
public:
    Vector(double x=0, double y=0, double z=0);
    friend bool operator < (const Vector &ob1, const Vector &ob2);
private:
    
    double x;
    
    double y;
    
    double z;
};
