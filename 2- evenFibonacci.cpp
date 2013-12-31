#include <iostream>
#include <array>
using namespace std;
int main()
{
    int fib[50];
    int i=2,sum=0;
    fib[0]=0,fib[1]=1;
    for(int i=2;i<50;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
        if(fib[i]>4000000){break;}
    }
    for(int i=0;fib[i]<4000000;i++)
    {
        if((fib[i]%2)==0)
        {
            sum+=fib[i];
        }
    }
    cout << endl << sum;
    return 0;
}
