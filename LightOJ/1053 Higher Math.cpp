#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
int t;
cin>>t;
int a,b,c,max=0;
for(int i=1;i<=t;i++)
{
    cin>>a>>b>>c;
    max=a;
    if(b>max)
        max=b;
    if(c>max)
        max=c;
    if(max==a)
    {
        if((int)pow(max,2)==((int)pow(b,2)+(int)pow(c,2)))
            cout<<"Case "<<i<<": "<<"yes"<<endl;
        else
            cout<<"Case "<<i<<": "<<"no"<<endl;
    }
    else if(max==b)
    {
        if((int)pow(max,2)==((int)pow(a,2)+(int)pow(c,2)))
            cout<<"Case "<<i<<": "<<"yes"<<endl;
        else
            cout<<"Case "<<i<<": "<<"no"<<endl;
    }
    else if(max==c)
    {
        if((int)pow(max,2)==((int)pow(b,2)+(int)pow(a,2)))
            cout<<"Case "<<i<<": "<<"yes"<<endl;
        else
            cout<<"Case "<<i<<": "<<"no"<<endl;
    }

}


return 0;
}
