#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<sstream>
using namespace std;

int main()
{
long t;
while(cin>>t)
{
    for(long i=0;i<t;i++)
    {
        long long m,check;
        cin>>m;
        double n;
        n=sqrt(8*m-7);
        check=(long long)n;
        if(check==n)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}

return 0;
}
