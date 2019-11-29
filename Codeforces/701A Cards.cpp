#include<iostream>
#include<cstdio>
using namespace std;
 
int main()
{
int n;
while( ( scanf("%d",&n) ) ==1 )
{
int a[n],min=101,max=0,c;
 
for(int i=0;i<n;i++)
    cin>>a[i];
 
for(int i=0;i<n;i++)
{
    if(a[i]<min)
        min=a[i];
    if(a[i]>max)
        max=a[i];
}
 
while(min<=max)
{
    if(min!=max)
    {
        for(int i=0;i<n;i++)
        {
        if(min==a[i])
        {
            cout<<i+1<<" ";
            for(int i=0;i<n;i++)
            {
                if(max==a[i]){
                    cout<<i+1<<endl;a[i]=0;break;}
            }
        }
        }
    }
 
    else if(min==max)
    {
        c=0;
        for(int i=0;i<n;i++)
        {
            if(min==a[i])
            {
                cout<<i+1<<" ";
                c++;
                if(!(c&1))
                    cout<<endl;
            }
        }
    }
min++;
max--;
}
}
return 0;
}
