#include<bits/stdc++.h>
using namespace std;
#define pi 2.0*acos(0.0)

int main()
{
    int n;
    double r,co1,co2,sum=0.0;
    cin>>n>>r;
    vector<double>s,m;
    for(int i=0;i<n;i++)
    {
        cin>>co1>>co2;
        s.push_back(co1);
        m.push_back(co2);
    }
    for(int i=0;i<n-1;i++)
    {
        sum+=sqrt((s[i]-s[i+1])*(s[i]-s[i+1])+(m[i]-m[i+1])*(m[i]-m[i+1]));
    }
    sum+=sqrt((s[0]-s[n-1])*(s[0]-s[n-1])+(m[0]-m[n-1])*(m[0]-m[n-1]));
    cout<<fixed<<setprecision(2)<<(2.0*pi*r)+sum<<endl;

    return 0;
}
