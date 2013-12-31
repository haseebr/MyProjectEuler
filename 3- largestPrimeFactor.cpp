#include <iostream>
#include <math.h>
using namespace std;
bool checkprime(long long int);
int main()
{
    long long int number=600851475143,i,prod=1;
    cout << number << " ";
    for(i=2;i<number;++i)
    {
        if(number%i==0 and checkprime(i))
        {
            cout << i << " ";
            prod*=i;
            if(prod==number){break;}
        }
    }
    return 0;
}
bool checkprime(long long int lala)
{
    int i;
    int count1=0;
    for(i=2;i<=sqrt(lala);++i)
    {
        if(lala%i==0){count1++;}
    }
    if(count1==0)
        return true;
    else
        return false;
}
