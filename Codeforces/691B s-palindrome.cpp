#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
 
int main()
{
char str[1001];
gets(str);
int l=strlen(str),m=0,n;
if(l&1)n=l/2;
else n=(l/2)-1;
for(int i=0;i<=n;i++)
{
    if(str[i]=='b' || str[i]=='d' || str[i]=='o' || str[i]=='p' || str[i]=='q' || str[i]=='x' || str[i]=='v' || str[i]=='w' || str[i]=='A' || str[i]=='H' || str[i]=='I' || str[i]=='M' || str[i]=='O' || str[i]=='T' || str[i]=='U' || str[i]=='V' || str[i]=='W' || str[i]=='X' || str[i]=='Y')
    {
        if(str[i]=='b')
        {
            if(str[l-1-i]!='d')
                m=1;
        }
        else if(str[i]=='d')
        {
            if(str[l-1-i]!='b')
                m=1;
        }
        else if(str[i]=='p')
        {
            if(str[l-1-i]!='q')
                m=1;
        }
        else if(str[i]=='q')
        {
            if(str[l-1-i]!='p')
                m=1;
        }
        else if(str[i]!=str[l-i-1])
            m=1;
    }
    else m=1;
}
if(!m)
    cout<<"TAK"<<endl;
else if(m)
    cout<<"NIE"<<endl;
 
return 0;
}
