#include<iostream>
using namespace std;

int main()
{
long int swap,t=1,test,s,d,m,n;
cin>>test;
while(t!=test+1)
{
cin>>s>>d;
m=(s+d)/2;
n=s-m;
if(m<n)
{
swap=m;
m=n;
n=swap;
}
if(m<0 || n<0 || ((s+d)%2)!=0 || ((s-d)%2)!=0)
{
    cout<<"impossible"<<endl;
    t++;
    continue;
}
cout<<m<<' '<<n<<endl;
t++;
}
return 0;
}
