#include<bits/stdc++.h>
using namespace std;

int main()
{
char s[256];
int count;
while(gets(s))
{
    count=0;
    for(int i=0;s[i];)
    {
        if( (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') )
        {
            while(s[i]!=' ' && s[i]!='\0' && ((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')))
            {
                i++;
            }
            count++;
        }
        if(s[i])
            i++;
    }
    cout<<count<<endl;
}
return 0;
}
