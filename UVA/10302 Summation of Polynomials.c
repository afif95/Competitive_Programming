#include<stdio.h>
int main()
{
long long int p,f,i,sum=0;
while(scanf("%lld",&p)!=EOF)
{
for(i=1;i<=p;i++)
{
sum=sum+(i*i*i);
}
printf("%lld\n",sum);
sum=0;
}
return 0;
}
