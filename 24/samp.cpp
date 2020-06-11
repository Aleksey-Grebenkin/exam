#include "samp.h"
#include "iostream"
using namespace std;
Samp::Samp(double a, double b)
{
    this->a=a;
    this->b=b;
    cnt++;
}

Samp::~Samp()
{
    a=0;
    b=0;
}

void Samp::print()
{
    cout << "a: " << a <<" b: " << b << endl;

}

int Samp::cnt=0;

int Samp:: GetCnt()
{
    return cnt;
}
