#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int t;
long long r1,c1,r2,c2;
cin>>t;
for(int i=1;i<=t;i++)
{
    cin>>r1>>c1>>r2>>c2;
    if(abs((r2-r1))==abs((c2-c1)))
        cout<<"Case "<<i<<": "<<1<<endl;
    else if( ((c1-r1)&1) && ((c2-r2)&1))
    {
        cout<<"Case "<<i<<": "<<2<<endl;
    }
    else if( !((c1-r1)&1) && !((c2-r2)&1))
    {
        cout<<"Case "<<i<<": "<<2<<endl;
    }
    else
    {
        cout<<"Case "<<i<<": "<<"impossible"<<endl;
    }
}
return 0;
}
