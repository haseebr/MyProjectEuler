#include <iostream>
using namespace std;
bool checkpalin(int);
int main()
{
    int product,highest=0;
    bool found=false;
    for(int i=100;i<1000;++i)
    {
        for(int j=999;j>99;--j)
        {
            product=i*j;
            if((product) > highest)
            {
                found = checkpalin(i*j);
                if(found){
                highest = product;
                cout << product << " i = " << i << " j = " << j <<endl; }
            }

        }
    }
}
bool checkpalin(int n)
{
    int n1, rev = 0, rem;
    n1 = n;
    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (n1 == rev){return true;}
    else{return false;}
}
