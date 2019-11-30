#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long cases,a,b,c,d,e,f;
    long long no=0,n;
    scanf("%lld",&cases);
    while(cases--)
    {
        long long holder[10000];
        no++;
        scanf("%lld %lld %lld %lld %lld %lld %lld",&a,&b,&c,&d,&e,&f,&n);
        holder[0]=a;
        holder[1]=b;
        holder[2]=c;
        holder[3]=d;
        holder[4]=e;
        holder[5]=f;
        for(long long int i=6;i<=n;i++)
        {
            holder[i]=(holder[i-1]+holder[i-2]+holder[i-3]+holder[i-4]+holder[i-5]+holder[i-6])%10000007;
        }
        printf("Case %lld: %lld\n",no,holder[n]%10000007);
    }
    return 0;
}
