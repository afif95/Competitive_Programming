#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
int t;
cin>>t;
long long s,m,n,k;
for(int w=1;w<=t;w++)
{
    cin>>s;
    n=ceil(sqrt(s));
    m=n*n;
    k=m-n+1;
    if(s==k)
    {
        cout<<"Case "<<w<<": "<<n<<" "<<n<<endl;
        continue;
    }
    if(n&1)
    {
        if(s>k)
        {
            cout<<"Case "<<w<<": "<<m-s+1<<" "<<n<<endl;
        }
        else
        {
            cout<<"Case "<<w<<": "<<n<<" "<<s-m+2*n-2+1<<endl;
        }
    }
    else
    {
        if(s>k)
        {
            cout<<"Case "<<w<<": "<<n<<" "<<m-s+1<<endl;
        }
        else
        {
            cout<<"Case "<<w<<": "<<s-m+2*n-2+1<<" "<<n<<endl;
        }
    }
}
return 0;
}
