#include<stdio.h>
#include<string.h>
int main()
{
char a[10];
int t=1;
while(scanf("%s",a)==1)
{
if(!strcmp(a,"*"))
    break;
if(!strcmp(a,"Hajj"))
    printf("Case %d: Hajj-e-Akbar\n",t);
else if(!strcmp(a,"Umrah"))
    printf("Case %d: Hajj-e-Asghar\n",t);
    t++;
}
return 0;
}
