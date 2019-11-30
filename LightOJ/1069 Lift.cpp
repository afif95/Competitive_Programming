#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
int t,a,b;
cin>>t;
for(int i=1;i<=t;i++)
{
    cin>>a>>b;
    cout<<"Case "<<i<<": "<<abs(a-b)*4+3+5+3+a*4+3+5<<endl;
}
return 0;
}
