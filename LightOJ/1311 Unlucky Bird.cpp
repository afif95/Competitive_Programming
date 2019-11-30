#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
int test;double v1,v2,v3,a1,a2,t1,t2,s1,s2;
cin>>test;
for(int i=1;i<=test;i++)
{
    cin>>v1>>v2>>v3>>a1>>a2;
    s1=(v1*v1)/(2*a1);
    s2=(v2*v2)/(2*a2);
    t1=v1/a1;
    t2=v2/a2;
    if(t1>t2)
    cout<<"Case "<<i<<": "<<s1+s2<<" "<<t1*v3<<endl;
    else
    cout<<"Case "<<i<<": "<<fixed<<setprecision(15)<<s1+s2<<" "<<t2*v3<<endl;
}

return 0;
}
