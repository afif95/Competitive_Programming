#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int t;
long long n,i,p,q;
cin>>t;
for(int k=1;k<=t;k++)
{
    cin>>n;
    if(n&1)
        cout<<"Case "<<k<<": Impossible"<<endl;
    else
    {
        q=1;
        p=n;
        while(!(p&1))
        {
            q*=2;
            p/=2;
        }
        cout<<"Case "<<k<<": "<<p<<" "<<q<<endl;
    }
}
return 0;
}
