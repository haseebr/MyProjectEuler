#include <iostream>
using namespace std;
bool checkall(long long);
int main()
{
    for(long long i=100000;i<9999999999;++i)
    {
        if(checkall(i)){cout << i << endl;break;}

    }
    return 0;
}
bool checkall(long long number)
{
    int count1=0;
    for(int i=10;i<=20;i++)
    {
        if(number%i==0)
            count1++;
    }
    if(count1==11){
        return true;}
    else
        return false;
}
