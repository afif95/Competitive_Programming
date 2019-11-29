#include<iostream>
#include<cstdio>
using namespace std;
 
int main()
{
long long n,c;
while((scanf("%I64d%I64d",&n,&c))==2)
{
    long long count=0,t,t1,t2;
    for(long long i=0;i<n;i++)
    {
        cin>>t;
        if(!i)
        {
            t1=t;
            count++;
        }
        else
        {
            t2=t;
            if(t2-t1<=c)
                count++;
            else
                count=1;
            t1=t2;
        }
    }
    cout<<count<<endl;
}
}

