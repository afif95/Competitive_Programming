#include<bits/stdc++.h>
using namespace std;
 
int totient(int n)
{
    int ret=n;
    if(!(n%2)){
    while(!(n%2))
    {
        n/=2;
    }
    ret-=ret/2;
    }
    for(int i=3;i*i<=n;i+=2)
    {
        if(!(n%i)){
        while(!(n%i))
        {
            n/=i;
        }
        ret-=ret/i;
        }
    }
    if(n>1)
    {
        ret-=ret/n;
    }
    return ret;
}
 
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<totient(n)<<endl;
    }
    return 0;
}
 
