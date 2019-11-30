#include<stdio.h>
#include<string.h>
int main()
{
int t=1,test,i,m=0,sum=0;
char a[110];
scanf("%d",&test);
getchar();
while(t!=test+1)
{
gets(a);
for(i=0;i<strlen(a);i++)
{
    if(a[i]==' ' || a[i]=='a' || a[i]=='d' || a[i]=='g' || a[i]=='j' || a[i]=='m' || a[i]=='p' || a[i]=='t' || a[i]=='w')
          m=1;
    else if(a[i]=='b' || a[i]=='e' || a[i]=='h' || a[i]=='k' || a[i]=='n' || a[i]=='q' || a[i]=='u' || a[i]=='x')
          m=2;
    else if(a[i]=='c' || a[i]=='f' || a[i]=='i' || a[i]=='l' || a[i]=='o' || a[i]=='r' || a[i]=='v' || a[i]=='y')
        m=3;
    else if(a[i]=='s' || a[i]=='z')
        m=4;
sum=sum+m;
}
printf("Case #%d: %d\n",t,sum);
t++;sum=0;m=0;
}
return 0;
}
