#include<iostream>
#include<cstdio>
using namespace std;
 
int main()
{
int n;
while((scanf("%d",&n))==1)
{
    int a[n],p[n],min,sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i]>>p[i];
        if(i==0)
        {
            sum=a[i]*p[i];
            min=p[i];
        }
        else
        {
            if(p[i]<min)
            {
                sum+=a[i]*p[i];
                min=p[i];
            }
            else{
                sum+=min*a[i];
            }
        }
    }
    cout<<sum<<endl;
 
}
 
}
