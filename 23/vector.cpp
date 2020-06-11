#include "vector.h"
#include "math.h"
Vector:: Vector(double x,double y,double z)
{
    this->x=x;
    this->y=y;
    this->z=z;
}


bool operator < (const Vector &ob1, const Vector &ob2)
{
    if ((pow(ob1.x,2)+pow(ob1.y,2)+pow(ob1.z,2))<(pow(ob2.x,2)+pow(ob2.y,2)+pow(ob2.z,2)))
        return true;
    return false;
}
