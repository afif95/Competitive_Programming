#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
long long n,count;
for(int i=1;i<=t;i++)
{
    cin>>n;
    count=0;
    while(n)
    {
        if(n%2==1)
            count++;
        n/=2;
    }
    if(count&1)
        cout<<"Case "<<i<<": "<<"odd"<<endl;
    else
        cout<<"Case "<<i<<": "<<"even"<<endl;
}
return 0;
}
