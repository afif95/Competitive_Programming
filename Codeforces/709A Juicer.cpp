#include<iostream>
#include<cstdio>
using namespace std;
 
int main()
{
    int n,b,d,sum=0,c=0;
    while((scanf("%d%d%d",&n,&b,&d))==3)
    {
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
        {
            if(a[i]<=b)
            {
                sum+=a[i];
                if(sum>d)
                {
                    c++;
                    sum=0;
                }
            }
        }
    cout<<c<<endl;
    c=0;
    sum=0;
    }
}
