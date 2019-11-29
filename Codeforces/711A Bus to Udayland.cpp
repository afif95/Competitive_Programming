#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
 
int main()
{
int n;
while((scanf("%d",&n))==1)
{
    string s[n];int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if((s[i][0]=='O' && s[i][1]=='O') && !count)
        {
            count=1;
            s[i][0]='+';s[i][1]='+';
        }
        else if((s[i][3]=='O' && s[i][4]=='O') && !count)
        {
            count=1;
            s[i][3]='+';s[i][4]='+';
        }
    }
    if(count)
        cout<<"YES"<<endl;
    else
    {
        cout<<"NO"<<endl;
        continue;
    }
    for(int i=0;i<n;i++)
        cout<<s[i]<<endl;
 
}
 
 
}

