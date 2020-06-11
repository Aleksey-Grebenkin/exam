#pragma once

class Samp
{
public:
    Samp(double a=0, double b=0);
    
    ~Samp();
    
    void print();
    
    static int GetCnt();
    
private:
    
    double a;
    
    double b;
    
    static int cnt;
    
};

