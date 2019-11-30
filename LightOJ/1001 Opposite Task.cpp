#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
int t,m,p,n;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>n;
    if(n==0)
    {
        cout<<0<<" "<<0<<endl;
        continue;
    }
    m=rand()%n;
    p=n-m;
    if(m>10)
    {
        p=p+m-10;
        m=m-m+10;
    }
    else if(p>10)
    {
        m=m+p-10;
        p=p-p+10;
    }
    cout<<m<<" "<<p<<endl;
}
return 0;
}
