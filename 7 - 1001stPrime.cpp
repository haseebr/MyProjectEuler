#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i,j,count1=0,prime=0;
    for(i=2;prime<10001;++i)
    {
        for(j=2;j<=sqrt(i);++j)
        {
            if((i%j)==0)
                ++count1;
        }
        if(count1==0) {prime++;}
        count1=0;
    }
    cout << i-1;
}
