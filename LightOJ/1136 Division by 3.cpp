#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int t;
cin>>t;
long long a,b;
for(int i=1;i<=t;i++)
{
    cin>>a>>b;
    cout<<"Case "<<i<<": "<<((b*2)/3)-(((a-1)*2)/3)<<endl;
}
return 0;
}
