#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    unsigned long long i,j,sum=0;
    int count1=0;
    for(i=2;i<2000000;++i)
    {
        for(j=2;j<=sqrt(i);++j)
        {
            if((i%j)==0)
            ++count1;
        }

        if(count1==0){cout << i << endl;sum+=i;}
        count1=0;
    }
    cout << sum;
}
