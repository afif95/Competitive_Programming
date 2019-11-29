#include<iostream>
#include<cstdio>
using namespace std;
 
int main()
{
long long int n;
while((scanf("%I64d",&n))==1)
{
if(!(n&1))
cout<<n/2<<endl;
else
cout<<-(n+1)/2<<endl;
}
 
}
