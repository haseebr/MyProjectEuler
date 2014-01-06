#include <iostream>
#include <cstring>
#include "100by50.txt"
using namespace std;
int main()
{
	long long numb[100][50] { DATA };
	long long sum[51];
	memset(sum,0,51);
	int carry=0,temp=0;
	for(int j=49;j>=0;--j)
	{
		temp=0;
		for(int i=0;i<100;++i)
		{
			temp+=numb[i][j];
		}
		temp+=carry;
		sum[j+1]=temp%100;
		sum[j+1]=sum[j+1]%10;
		carry=temp/10;
		if(j==1){sum[1]=sum[j+1];}
		if(j==0){sum[0]=carry;}
	}
	for(int i=0;i<51;++i) {cout << sum[i];}
}
