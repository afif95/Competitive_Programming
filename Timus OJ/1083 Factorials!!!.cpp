#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;

int main()
{
    int n,i,m,mul,k;
    while(cin>>n){
    string s;
    cin>>s;
    k=s.size();
    i=1;
    m=n;
    mul=1;
    if(n%k)                 //k doesnвЂ™t divide n
    {
        while(m>=(n%k))
        {
            mul*=m;
            m=n-i*k;
            i++;
        }

    }

    else
    {
        while(m>=k)
        {
            mul*=m;
            m=n-i*k;
            i++;
        }
    }
    cout<<mul<<endl;
    }
return 0;
}
