#include<iostream>
using namespace std;

int main()
{
int n,t=1,test,a[105],big,p;
cin>>test;

while(t!=test+1)
{
cin>>n;
for(int i=0;i<n;i++)
    cin>>a[i];
big=a[0];
for(int i=0;i<n;i++)
{
p=a[i];
if(p>big)
    big=p;
}
cout<<"Case "<<t<<": "<<big<<endl;
t++;big=0;
}
return 0;
}
