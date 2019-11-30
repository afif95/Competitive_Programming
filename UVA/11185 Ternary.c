#include<stdio.h>

int main()
{
long long int a[1000],n,i,j;
while(scanf("%lld",&n)==1)
{
if(n<0)
    break;
for(i=0;i<1000;i++)
{
a[i]=n%3;
n/=3;
if(n==0)
    break;
}
for(j=i;j>=0;j--)
printf("%lld",a[j]);
printf("\n");
}
return 0;
}
