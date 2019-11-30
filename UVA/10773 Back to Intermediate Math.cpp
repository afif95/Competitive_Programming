#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
double d,v,u,m,n,p,swap;
int t=1,test;
scanf("%d",&test);
while(t!=test+1)
{
scanf("%lf%lf%lf",&d,&v,&u);
if(v==0 || u==0 || v>=u)
{
    cout<<"Case "<<t<<": can't determine"<<endl;
    t++;
    continue;
}
m=1.0*(d/u);
n=1.0*d/(1.0*u*sin(acos(v/u)));
if(n<m)
{
    swap=n;
    n=m;
    m=swap;
}
p=1.0*(n-m);
printf("Case %d: %.3lf\n",t,p);
t++;
}
return 0;
}
