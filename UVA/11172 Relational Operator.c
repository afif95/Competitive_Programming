#include<stdio.h>
int main()
{
int t=1,test;
long long int a,b;
scanf("%d",&test);
while(t!=test+1)
{
scanf("%lld %lld",&a,&b);
if(a<b)
    printf("<\n");
else if(a>b)
    printf(">\n");
else if(a==b)
    printf("=\n");
t++;
}
return 0;
}
