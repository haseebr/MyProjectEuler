#include <iostream>
using namespace std;
int main()
{
    long long sumsq=0,sqsum=0;
    for(int i=1;i<=100;i++)
    {
        sumsq+=(i*i);
        sqsum+=i;
    }
    cout << (sqsum*sqsum)-sumsq << endl;
}
