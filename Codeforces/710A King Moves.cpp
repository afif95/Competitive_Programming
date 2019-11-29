#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
 
int main()
{
char a[3];
gets(a);
 
if(a[0]=='a' || a[0]=='h')
{
    if(a[1]=='1' || a[1]=='8')
        cout<<3<<endl;
    else if(a[1]>='2' && a[1]<='7')
        cout<<5<<endl;
}
 
else if(a[0]>='b' && a[0]<='g')
{
    if(a[1]=='1' || a[1]=='8')
        cout<<5<<endl;
    else if(a[1]>='2' && a[1]<='7')
        cout<<8<<endl;
}
 
return 0;
}

