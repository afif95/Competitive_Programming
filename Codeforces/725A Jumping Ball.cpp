#include<iostream>
#include<cstring>
using namespace std;
 
int main()
{
int i=0,n,sum=0,sum1=0;
string str;
cin>>n>>str;
if(str[0]!='<' && str[str.size()-1]!='>')
    cout<<0<<endl;
else {if(str[0]=='<')
{
    while(str[i]!='>' && str[i]!='\0'){
            i++;
        sum++;
    }
}
i=str.size()-1;
if(str[str.size()-1]=='>')
{
    while(str[i]!='<' && i>=0)
    {
        i--;
        sum1++;
    }
}
cout<<sum+sum1<<endl;}
return 0;
}
