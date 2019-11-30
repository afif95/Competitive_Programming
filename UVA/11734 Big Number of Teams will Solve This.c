#include<stdio.h>
#include<string.h>
int main()
{
int t=1,test,x,i,j;
scanf("%d\n",&test);
char m[30],n[30],p[30];
while(t!=test+1)
{
    gets(m);
    gets(n);
    x=strcmp(m,n);
if(0!=x)
{
    j=0;
    for(i=0;i<strlen(m);i++)
    {
        if( (m[i]>='a' && m[i]<='z') || (m[i]>='A' && m[i]<='Z') )
         {
             p[j]=m[i];
             j++;
         }
    }
    p[j]='\0';

    if((strcmp(n,p))==0)
        printf("Case %d: Output Format Error\n",t);
    else
        printf("Case %d: Wrong Answer\n",t);
}
else
    printf("Case %d: Yes\n",t);

t++;
}
return 0;
}
