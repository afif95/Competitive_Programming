
#include<iostream>
#include<cstdio>
using namespace std;
 
int main()
{
long int n;
while((scanf("%ld",&n))==1){
long int i,m=0,min=1000000000,r=0;
char a[200000];
long int b[200000];
for(i=0;i<200000;i++)
{
    a[i]='\0';
    b[i]=0;
}
for(i=0;i<n;i++)
{
    cin>>a[i];
}
for(i=0;i<n;i++)
{
    cin>>b[i];
}
 
for(i=0;i<n;i++)
{
    if((a[i]=='R' && a[i+1]=='L'))
    {
        m=1;
        r=(b[i+1]-b[i])/2;
            if(r<min)
                min=r;
    }
}
if(m)cout<<min<<endl;
else cout<<-1<<endl;
}
return 0;
}
