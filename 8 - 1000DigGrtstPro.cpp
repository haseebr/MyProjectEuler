#include <iostream>
#include <math.h>
#include "bada.h"
using namespace std;
int main()
{
    int badanum[] { DATA };
    int pro=0,highest=0;
    for(int i=0;i<=1000;++i)
    {
        if (badanum[i]>6 and badanum[i+1] > 6 and badanum[i+2] >6 and badanum[i+3]>6 and badanum[i+4]>6)
        {
            pro=badanum[i]*badanum[i+1]*badanum[i+2]*badanum[i+3]*badanum[i+4];
            if(pro>highest)
            {
                cout << pro << " " << badanum[i] << badanum[i+1] << badanum[i+2] << badanum[i+3] << badanum[i+4] << endl;
                highest = pro;
            }
            pro = 0;
        }
    }

}

