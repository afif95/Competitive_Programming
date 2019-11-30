#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdio>
using namespace std;
#define pi 2*acos(0.0)
int main()
{
int t;
cin>>t;
double o1,o2,a1,a2,b1,b2,r,ab,angle;
for(int i=1;i<=t;i++)
{
    cin>>o1>>o2>>a1>>a2>>b1>>b2;
    r=sqrt( (o1-a1)*(o1-a1)+(o2-a2)*(o2-a2) );
    ab=sqrt( (a1-b1)*(a1-b1)+(a2-b2)*(a2-b2) );
    if(r!=0)
        angle=2.0*asin( (ab/2.0)/r );
    else
        angle=2.0*asin( (ab/2.0) );
    cout<<"Case "<<i<<": "<<fixed<<setprecision(12)<<r*angle<<endl;
}

return 0;
}
