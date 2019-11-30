#include<iostream>
using namespace std;

int main()
{
int a,b,c,t=1,m,test;
cin>>test;

while(t!=test+1)
{
cin>>a>>b>>c;
if((a<b && b<c) || (a>b && b>c))
    m=b;
else if((a<c && c<b) || (a>c && c>b))
    m=c;
else if((c<a && a<b) || (c>a && a>b))
    m=a;

cout<<"Case "<<t<<": "<<m<<endl;
t++;
}
return 0;
}
