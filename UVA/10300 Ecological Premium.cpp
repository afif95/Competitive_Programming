#include<iostream>
using namespace std;

int main()
{
unsigned long int test,f,p,q,r,sum=0;
cin>>test;
for(int i=1;i<=test;i++)
{
cin>>f;
for(int j=1;j<=f;j++)
{
cin>>p>>q>>r;
sum+=p*r;
}
cout<<sum<<endl;
sum=0;
}
return 0;
}
