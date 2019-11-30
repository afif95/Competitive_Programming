#include<stdio.h>
#include<string.h>
int main()
{
int t=1,test,z,i,j,k;
scanf("%d",&test);
char m[22],n[22];
while(t!=test+1)
{
scanf("%s%s",m,n);
if(strlen(m)==strlen(n))
{
    z=0;
    for(i=0;m[i]!='\0';i++)
    {
        if(m[i]==n[i])
            z=0;
        else if((m[i]=='a' || m[i]=='e' || m[i]=='i' || m[i]=='o' || m[i]=='u') && (n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' ||n[i]=='u'))
            z=0;
        else if((m[i]=='a' || m[i]=='e' || m[i]=='i' || m[i]=='o' || m[i]=='u') && ((n[i]>'a' && n[i]<'e') || (n[i]>'i' && n[i]<'o') || (n[i]>'u' && n[i]<='z')))
            {z=1;break;}
        else
            {z=1;break;}
    }
if(z==1)
    printf("No\n");
else if(z==0)
    printf("Yes\n");
}
else if(strlen(m)!=strlen(n))
    printf("No\n");
t++;
}
return 0;
}
