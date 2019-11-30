#include<stdio.h>

int main()
{
char s[1000];
int i;
while(gets(s))
{
i=0;
while(s[i]!='\0')
{
    printf("%c",s[i]-7);
    i++;
}
printf("\n");
}
return 0;
}
