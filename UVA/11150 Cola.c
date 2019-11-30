#include<stdio.h>

int main()
{
int n,m,j,sum=0;
while(scanf("%d",&n)==1)
{
m=n;
if(n==2)
    sum=1;
while((m/3)!=0)
{
sum+=m/3;
m=(m/3)+(m%3);
j=m;
}
if(j==2)
    sum+=1;
printf("%d\n",sum+n);
sum=0;j=0;m=0;
}
return 0;
}
