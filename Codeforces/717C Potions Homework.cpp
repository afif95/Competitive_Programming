#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
long n;
while((scanf("%I64d",&n))==1)
{
    long long a[n],sum=0;
    for(long long i=0;i<n;i++)
        cin>>a[i];
 
    qsort(a,n,sizeof(long long),cmpfunc);
 
    for(long long i=0;i<n;i++)
    {
        sum+=a[i]*a[n-i-1];
    }
    cout<<sum%10007<<endl;
}
 
}
