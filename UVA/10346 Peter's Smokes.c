#include<stdio.h>

int main()
{
int n,k,m,r,raw=0,sum=0;

while(scanf("%d %d",&n,&k)==2)
{
m=n;
while((m/k)!=0)
{
sum+=(m/k);
m=(m/k)+(m%k);
}
printf("%d\n",n+sum);
sum=0;
}
return 0;
}
