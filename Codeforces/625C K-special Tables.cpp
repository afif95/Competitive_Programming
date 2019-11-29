#include<iostream>
#include<cstdio>
using namespace std;
 
int main()
{
int n,k;
while((scanf("%d%d",&n,&k))==2)
{
    int a[n][n],c=1,sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k-1;j++)
        {
            a[i][j]=c++;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=k-1;j<n;j++)
        {
            a[i][j]=c++;
            if(j==k-1)
                sum+=a[i][j];
        }
    }
    cout<<sum<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
 
return 0;
}
