#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    bool flag[164001];
    int prime[15000];
    for(int i=2;i<=164000;i++)
        flag[i]=true;
    for(int i=2;i<=sqrt(164000);i++)
        if(flag[i])
            for(int j=i;j*i<=164000;j++)
                flag[i*j]=false;
    int j=0;
    for(int i=2;i<=164000;i++)
        if(flag[i])
            prime[j++]=i;
    int k;
    cin>>k;
    int m;
    for(int i=0;i<k;i++)
    {
        cin>>m;
        cout<<prime[m-1]<<endl;
    }
return 0;
}
