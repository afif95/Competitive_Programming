#include<iostream>
#include<cstdio>
using namespace std;
 
int main()
{
int n;
char ch;
long long int m,child,d;
while( (scanf( "%d %I64d",&n,&m )) ==2 )
{
child=0;
for(int i=0;i<n;i++){
cin>>ch>>d;
if(ch=='+')m+=d;
else if(ch=='-')
{
    if((m-d)<0)
        child++;
    else if((m-d)>=0)
        m-=d;
}
}
cout<<m<<" "<<child<<endl;
}
return 0;
}

