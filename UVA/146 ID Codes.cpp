#include<iostream>
#include<cstring>
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
char s[50];
int m;
while(1)
{
gets(s);
if(s[0]=='#')
    break;
m=strlen(s);
if(!next_permutation(s,s+m))
{
    puts("No Successor");
    continue;
}
puts(s);
}
return 0;
}
