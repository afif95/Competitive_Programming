#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;
 
int main()
{
    string s;
    cin>>s;int i=0;
    while(s[i]!='\0')
    {
        if(s[i]!='A' && s[i]!='O' && s[i]!='Y' && s[i]!='E' && s[i]!='U' && s[i]!='I' && s[i]!='a' && s[i]!='o' && s[i]!='y' && s[i]!='e' && s[i]!='u' && s[i]!='i')
            cout<<"."<<(char)tolower(s[i]);
        i++;
    }
}
