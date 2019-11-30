#include<iostream>
using namespace std;

int main()
{
int i,j,a,b,c,d,l,m,count=0;
while(1)
{
cin>>a>>b>>c>>d>>l;
if(a==0 && b==0 && c==0 && d==0 && l==0)
    break;
for(j=0;j<=l;j++)
{
m=a*j*j+b*j+c;
if(m%d==0)
    count++;
}
cout<<count<<endl;
count=0;
}
return 0;
}
