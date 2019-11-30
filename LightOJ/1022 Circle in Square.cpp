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
double r;
cin>>r;
cout<<"Case "<<i<<": "<<fixed<<setprecision(2)<<pow(2.0*r,2.0)-( 2 * acos (0.0) * pow(r,2.0))<<endl;
}
}
