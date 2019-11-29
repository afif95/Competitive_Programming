#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int n,m;
    while((scanf("%I64d%I64d",&n,&m))==2)
    {
        int a[100005]={0},b[100005]={0};
        long long r[100005]={0};
        long long count=n,count1=n,p,q;
        for(long long i=0;i<m;i++)
        {
            cin>>p>>q;
            if(i)
            {
                if(!a[p-1])count--;
                if(!b[q-1])count1--;
                r[i]=count*count1;
                a[p-1]=1;
                b[q-1]=1;
            }
            else {
                count--;
                count1--;
                r[i]=(count)*(count1);
                a[p-1]=1;
                b[q-1]=1;
            }
        }
        for(long long j=0;j<m;j++)
            cout<<r[j]<<" ";
        cout<<endl;
    }
 
}
