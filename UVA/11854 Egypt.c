#include<stdio.h>
int main()
{
long long int a,b,c,swap;
while(1)
{
scanf("%lld %lld %lld",&a,&b,&c);
if(a==0 && b==0 && c==0)
    break;
    if(a>c)
    {
        swap=a;
        a=c;
        c=swap;
    }
    else if(b>c)
    {
        swap=b;
        b=c;
        c=swap;
    }
    else if(a>c && b>c)
    {
        if(a>b)
        {
            swap=a;
            a=c;
            c=swap;
        }
        else if(b>a)
        {
            swap=b;
            b=c;
            c=swap;
        }
    }
a=a*a;
b=b*b;
c=c*c;
if(c==(a+b))
    printf("right\n");
else
    printf("wrong\n");
}
return 0;
}
