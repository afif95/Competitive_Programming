#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
int t;
cin>>t;
for(int i=1;i<=t;i++)
{
    int n,m,sum=0;
    cin>>n;
    for(int j=0;j<n;j++)
    {
        cin>>m;
        if(m>=0)
            sum+=m;
    }
    cout<<"Case "<<i<<": "<<sum<<endl;
}


return 0;
}
