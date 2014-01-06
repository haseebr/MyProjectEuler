#include <iostream>
#include "11 - bees.txt"
#include <algorithm>
using namespace std;
int main()
{
    long bees[20][20] {DATA};
    long d1pro=0,d1newpro=0,highest=0,pro=0,newpro=0,cpro=0,cnewpro=0,dpro=0,dnewpro=0;
    for(int i=0;i<20;++i)
    {
        for(int j=0;j<17;++j)
        {
            pro=bees[i][j]*bees[i][j+1]*bees[i][j+2]*bees[i][j+3];
            if(pro > newpro)
                newpro=pro;
        }
    }
    highest=newpro;
    for(int j=0;j<20;++j)
    {
        for(int i=0;i<17;++i)
        {
            cpro=bees[i][j]*bees[i+1][j]*bees[i+2][j]*bees[i+3][j];
            if(cpro > cnewpro)
                cnewpro=cpro;
        }
    }
    if(cnewpro > highest) highest = cnewpro;
    for(int i=0;i<17;++i)
    {
        for(int j=0;j<17;++j)
        {
            dpro=bees[i][j]*bees[i+1][j+1]*bees[i+2][j+2]*bees[i+3][j+3];
            if(dpro > dnewpro)
                dnewpro=dpro;
        }
    }
    if(dnewpro > highest) highest = dnewpro;
    for(int i=0;i<17;++i)
    {
        for(int j=19;j>3;--j)
        {
            d1pro=bees[i][j]*bees[i+1][j-1]*bees[i+2][j-2]*bees[i+3][j-3];
            if(d1pro > d1newpro)
                d1newpro=d1pro;
        }
    }
    if(d1newpro > highest) highest = d1newpro;
    cout << "Highest : " << highest << endl;
}
