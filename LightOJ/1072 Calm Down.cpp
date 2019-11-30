#define pi 3.141592653589793238462643383279502884197
#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
int t;
cin>>t;
for(int i=1;i<=t;i++)
{
    double r,n;
    cin>>r>>n;
    double res;
    res=(r*(sin(pi/n)))/(1.0+(double)sin(pi/n));
    int r1;
    r1=(int)res;
    if(r1!=res)
        cout<<fixed<<setprecision(10)<<"Case "<<i<<": "<<res<<endl;
    else
        cout<<"Case "<<i<<": "<<r1<<endl;
}
return 0;
}
