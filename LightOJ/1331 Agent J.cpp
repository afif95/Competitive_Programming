#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cmath>
using namespace std;
#define pi 2.0*acos(0.0)
int main()
{
    int t;
    cin>>t;
    double r1,r2,r3,s,abc,a,b,c,angle1,angle2,angle3,area;
    for(int i=1;i<=t;i++)
    {
        cin>>r1>>r2>>r3;

        a=r1+r2;
        b=r2+r3;
        c=r3+r1;

        s=(a+b+c)/2.0;

        abc=sqrt( s*(s-a)*(s-b)*(s-c) );

        angle1=acos( ( (a*a)+(c*c)-(b*b) )/ (2.0*a*c)  );
        angle2=acos( ( (a*a)-(c*c)+(b*b) )/ (2.0*a*b)  );
        angle3=acos( ( (c*c)+(b*b)-(a*a) )/ (2.0*b*c)  );

        area=((angle1*r1*r1)/2.0)+((angle2*r2*r2)/2.0)+((angle3*r3*r3)/2.0);

        cout<<"Case "<<i<<": "<<fixed<<setprecision(10)<<abc-area<<endl;
    }
}
