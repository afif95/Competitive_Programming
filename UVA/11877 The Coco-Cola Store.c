#include<stdio.h>

int main()
{
int n,m,r=0,raw=0,sum=0;

while(scanf("%d",&n)==1)
{
    if(n==0)
        break;
m=n;
while(m!=0)
{
    r=m%3;
    m=m/3;
    sum+=m;
    raw+=r;
}
    if(raw==6)
        sum+=3;
    else if(raw==5 || raw==4)
        sum+=2;
    else if(raw==3 || raw==2)
        sum+=1;


printf("%d\n",sum);
sum=0;raw=0;r=0;
}
return 0;
}
