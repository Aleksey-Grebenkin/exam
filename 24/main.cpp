
#include <iostream>

#include <list>

#include "samp.h"

using namespace std;


int main() 
{
    
    list<Samp> listSamp;
    
    for (int i=0;i<3;i++)
    {
        Samp samp;
        listSamp.push_back(samp);
        cout<<"cnt=" << Samp::GetCnt()<<endl;
    }
     
    cout << endl;
    for (Samp& obj : listSamp)
    {
        int i;
        cout << i << " samp" << endl;
        obj.print();
        i++;
        cout << endl;
    }
}
