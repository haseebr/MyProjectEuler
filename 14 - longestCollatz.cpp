#include <iostream>
#include <cstring>
using namespace std;
long long collatz(long long);
int highest=0,a[1000000]={0};
int main()
{
	for(long long i=1;i<1000000;++i)
		collatz(i);
	cout << highest+1;
}
long long collatz(long long num)
{
	long long temp=num;
    int	count=0;
	while(num!=1)
	{
		if(num%2==0)
		{
			num=num/2;
			count++;
			if(num < 1000000 and a[num] > 0){count+=a[num];goto out;}
		}
		else
		{
			num=(3*num)+1;
			count++;
			if(num < 1000000 and a[num] > 0){count+=a[num];	goto out;			}
		}
	}
	out:a[temp]=count;
	if(count>highest)
		highest=count;
}
