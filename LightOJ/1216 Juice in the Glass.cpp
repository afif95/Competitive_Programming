#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cmath>
#define pi 2*acos(0.0)
using namespace std;

int main()
{
int t;
double r1,r2,h,p,r;
cin>>t;
for(int i=1;i<=t;i++)
{
    cin>>r1>>r2>>h>>p;
    r=r2+((r1-r2)*p)/h;
    cout<<"Case "<<i<<": "<<fixed<<setprecision(9)<<1.0/3.0*pi*p*(r*r+r2*r2+r*r2)<<endl;
}
return 0;
}
