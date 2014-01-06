#include <iostream>
using namespace std;
int main()
{
    for(int i=1;i<500;++i)
    {
        for(int j=i+1;j<500;++j)
        {
            //int k = 1000-i-j;
            for(int k=j+1;k<500;++k)
            {
                if(((i*i) + (j*j) == (k*k)) and ((i+j+k)==1000))
                {
                    cout << i << " " << j << " " << k << " " << i*j*k << endl;
                    goto outside;
                }
            }
        }
    }
outside:return 0;
}
