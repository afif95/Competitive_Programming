#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
int t;
double a1,a2,b1,b2,c1,c2,d1,d2,ac,ab,bc,cf;
cin>>t;
for(int i=1;i<=t;i++)
{
    cin>>a1>>a2>>b1>>b2>>c1>>c2;
    d1=c1+a1-b1;
    d2=c2+a2-b2;
    ac=(a1-c1)*(a1-c1)+(a2-c2)*(a2-c2);
    ab=(a1-b1)*(a1-b1)+(a2-b2)*(a2-b2);
    bc=(b1-c1)*(b1-c1)+(b2-c2)*(b2-c2);
    cf=bc-(((ac-ab-bc)/(2*sqrt(ab)))*((ac-ab-bc)/(2*sqrt(ab))));
    cout<<"Case "<<i<<": "<<d1<<" "<<d2<<" "<<fixed<<setprecision(0)<<sqrt(cf)*sqrt(ab)<<endl;
}

return 0;
}
