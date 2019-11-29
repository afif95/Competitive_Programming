
#include<iostream>
#include<cstring>
#include<cstdio>
#include<sstream>
using namespace std;
 
int main()
{
string s;
int l=1,n;
while(s.size()<=1001)
{
stringstream ss;
ss<<l;
string str=ss.str();
s=s+str;
l++;
}
while((scanf("%d",&n))==1)
{
    cout<<s[n-1]<<endl;
}
}
