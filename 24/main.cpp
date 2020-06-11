//
//  main.cpp
//  24
//
//  Created by user on 11/06/2020.
//  Copyright © 2020 user. All rights reserved.
//

#include <iostream>

#include <list>

#include "samp.h"

using namespace std;


int main(int argc, const char * argv[]) {
    
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
