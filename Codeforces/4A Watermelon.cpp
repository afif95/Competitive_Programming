#include<iostream>
#include<cstdio>
using namespace std;
 
int main()
{
int n;
while((scanf("%d",&n))==1)
{
if(n==2)
    cout<<"NO"<<endl;
else if(!(n&1))
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
}
}
