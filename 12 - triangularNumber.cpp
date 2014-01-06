#include <iostream>
#include "12 - 1000"
#include <cstring>
using namespace std;
void check(long long);
int main()
{
    long long i,a;
    for(i=1;i<15000;i=i+2)
    {
        a=(((i)*(i+1))/2);
        check(a);
	}
	cout << "Done !";
}
void check(long long number)
{
    int prod=1,primarray[] { PRIME };
    int i=0,j=0,counta[20] {0};
    long long remain=number;
    while(1)
    {
        if(remain%primarray[i]==0)
        {
            counta[j]+=1;
            remain=remain/primarray[i];
            if(remain==1) {break;}
            i-1;
            j-1;
        }
        else {i++;j++;}
    }
    int size=sizeof(counta)/sizeof(counta[0]);
	for(int k=0;k<size;++k){prod*=(counta[k]+1);}
    if(prod>500)
		cout << number  << " " << prod << endl;
}
