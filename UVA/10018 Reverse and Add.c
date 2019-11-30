#include<stdio.h>

long long int rev(long long int a)
{
long long int reverse=0;
while(a!=0)
{
    reverse=reverse*10;
    reverse=reverse+a%10;
    a=a/10;
}
return reverse;
}

long long int add(long long int x,long long int y)
{
    long long int z;
    z=x+y;
    return z;
}

int main()
{
int test;
int t=0,h=0;
long long int n,e,f,g;
scanf("%d",&test);
while(t!=test)
{
scanf("%lld",&n);
while(1)
{
    e=rev(n);
    f=add(n,e);
    h++;
    g=rev(f);
    if(g==f)
        break;
    n=f;
    e=g;
}
printf("%d %lld\n",h,g);
t++;h=0;
}
return 0;
}
