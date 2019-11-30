#include<stdio.h>
int main()
{
int a,b,c,d,e;
while(scanf("%d %d",&a,&b)==2)
{
if(a==-1 && b==-1)
    break;
if(a>b)
{
    c=a;
    a=b;
    b=c;
}
d=100-b+a;
e=b-a;
if(d>e)
    printf("%d\n",e);
else
    printf("%d\n",d);
}
return 0;
}
