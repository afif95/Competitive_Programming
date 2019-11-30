#include<iostream>
using namespace std;

int main()
{
    int t;
    long long n,m,r1,r2,r3,r4,a,b,r;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>m;
        r1=m*(m+1)/2;
        r2=(m*(2*(m+1)+(m-1)))/2;
        r3=(m*(2*(2*m+1)+(m-1)))/2;
        r4=(m*(2*(3*m+1)+(m-1)))/2;
        a=((n/(2*m))*(2*r2+((n/(2*m))-1)*(r4-r2)))/2;
        b=((n/(2*m))*(2*r1+((n/(2*m))-1)*(r3-r1)))/2;
        r=a-b;
        cout<<"Case "<<i<<": "<<r<<endl;
    }

    return 0;
}
