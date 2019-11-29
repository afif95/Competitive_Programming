#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
 
int comp(const void *i,const void *j);
 
int main()
{
int n;
while((scanf("%d",&n))==1)
{
int a[n],t,c=0,sum=0;
for(int i=0;i<n;i++)
    cin>>a[i];
 
qsort(a,n,sizeof(n),comp);
 
for(int i=0;i<n;i++)
{
    if(sum<=a[i])
        c++;
    else if(sum>a[i])
        a[i]=0;
    sum+=a[i];
}
cout<<c<<endl;
}
return 0;
}
 
int comp(const void *i,const void *j)
{
    return *(int*)i-*(int*)j;
}
