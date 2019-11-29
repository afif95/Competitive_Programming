#include<iostream>
#include<cstdio>
using namespace std;
 
int main()
{
int n;
while((scanf("%d",&n))==1)
{
int p,c=0;
if(n==1)
{
    cin>>p;
    if(p==1)
        cout<<"YES"<<endl;
    else if(p==0)
        cout<<"NO"<<endl;
    continue;
}
for(int i=0;i<n;i++)
{
    cin>>p;
    if(p==0)
        c++;
}
if(c==1)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
}
 
}

