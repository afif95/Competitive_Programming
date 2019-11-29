
#include<iostream>
#include<cstdio>
using namespace std;
 
int main()
{
int n,a,c=0,i=1;
while((scanf("%d%d",&n,&a))==2)
{
    a-=1;
    int city[n];
    for(int j=0;j<n;j++)
        cin>>city[j];
    if(city[a])
        c++;
    while((a-i)>=0 && (a+i)<=n-1)
    {
        if(city[a-i] && city[a+i])
            c+=2;
        i++;
    }
    if((a-i)==-1 && (a+i)==n)
        cout<<c<<endl;
    else if((a-i)<0)
    {
        while((a+i)!=n)
        {
            if(city[a+i])
                c++;
            i++;
        }
        cout<<c<<endl;
    }
    else if((a+i)>(n-1))
    {
        while((a-i)!=-1)
        {
            if(city[a-i])
                c++;
            i++;
        }
        cout<<c<<endl;
    }
    c=0;i=1;
}
return 0;
}
