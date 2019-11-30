#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
char s[256];
int j=0,c=0;
while(gets(s))
{
    for(j=0;s[j]!='\0';j++)
    {
        if(s[j]=='\"' && !c)
        {
            cout<<"``";
            c=1;
        }
        else if(s[j]=='\"' && c)
        {
            cout<<"''";
            c=0;
        }
        else
        {
            cout<<s[j];
        }
    }
    cout<<endl;
}
return 0;
}

