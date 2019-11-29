#include<iostream>
#include<cstdio>
using namespace std;
 
int main()
{
int i,n;
while((scanf("%d",&n))==1)
{
cout<<"I hate ";
for(i=1;i<n;i++)
{
cout<<"that I ";
if((i&1))
    cout<<"love ";
else if(!(i&1))
    cout<<"hate ";
}
cout<<"it"<<endl;
}
return 0;
}

