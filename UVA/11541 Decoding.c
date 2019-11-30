#include<stdio.h>
#include<string.h>
int main()
{
int test,a,i,j,m=0,n=0;
char c;
char r[201];
scanf("%d\n",&test);

for(j=1;j<=test;j++)
{
c='\0';
while(1)
{
scanf("%c",&c);
if(c=='\n')
    break;
scanf("%d",&a);
n=m+a;
for(i=m;i<n;i++)
    r[i]=c;
m+=a;
}
r[n]='\0';
printf("Case %d: %s\n",j,r);
m=0;n=0;
}
return 0;
}
