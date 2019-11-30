#include<stdio.h>
int main()
{
long long int n,s,q,p,i;
while(scanf("%lld",&n)==1)
{
if(n==0)break;
if(n==1)
    printf("1\n");
else if(n==2)
    printf("2\n");
else if(n>=3)
{
    p=1;q=2;

  for(i=3;i<=n;i++)
    {
        if(i!=3){
        if(i&1)
            q=s;
        else
            p=s;}
    s=p+q;
    }
printf("%lld\n",s);
}
}

return 0;
}
