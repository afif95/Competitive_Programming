#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
 
int main()
{
char a[101],b[101],ch,g,s;
int n,p,q,i,j;
while((scanf("%d",&n))==1)
{
p=0,q=0,i=0,j=0;
g=getchar();
for(; (ch=getchar()) != '\n'; i++)
{
    if(i<n)
    a[i]=ch;
    else if(i>=n)
    {
    b[j]=ch;
    j++;
    }
}
a[n]='\0';
b[j]='\0';
 
for(i=0;i<n-1;i++)
    for(j=0;j<n-i-1;j++)
{
    if(a[j]>a[j+1])
    {
        s=a[j];
        a[j]=a[j+1];
        a[j+1]=s;
    }
}
 
for(i=0;i<n-1;i++)
    for(j=0;j<n-i-1;j++)
{
    if(b[j]>b[j+1])
    {
        s=b[j];
        b[j]=b[j+1];
        b[j+1]=s;
    }
}
 
for(int i=0;i<n;i++)
{
    if(a[i]<=b[i])
    {
        p=1;
        break;
    }
}
if(!p)
{
    cout<<"YES"<<endl;
    continue;
}
for(int i=0;i<n;i++)
{
    if(a[i]>=b[i])
    {
        q=1;
        break;
    }
}
if(!q)
{
    cout<<"YES"<<endl;
    continue;
}
if( p && q )
    cout<<"NO"<<endl;
}
return 0;
}

