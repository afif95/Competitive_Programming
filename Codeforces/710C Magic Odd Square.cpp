#include<iostream>
#include<cstdio>
using namespace std;
 
int main()
{
int n;
while((scanf("%d",&n))==1)
{
    int a[49][49]={0},odd=1,even=2;
    for(int i=0;i<n;i++)
    {
        if(i<=n/2){
            for(int j=n/2-i;j<=n/2+i;j++)
            {
                a[i][j]=odd;
                odd+=2;
            }
            for(int j=0;j<n;j++)
            {
                if(!a[i][j])
                {
                    a[i][j]=even;
                    even+=2;
                }
            }
        }
        else if(i>n/2){
            for(int j=n/2-(n-i-1);j<=n/2+(n-i-1);j++)
            {
                a[i][j]=odd;
                odd+=2;
            }
            for(int j=0;j<n;j++)
            {
                if(!a[i][j])
                {
                    a[i][j]=even;
                    even+=2;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
 
 
}
 
 
return 0;
}
