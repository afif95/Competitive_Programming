#include<bits/stdc++.h>
 
using namespace std;
const int N = 200005;
int indx[N+1];
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n+1];
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    //int indx[n+1];
    sort(a+1,a+n+1);
    int u,v;
    for(int i=0;i<m;i++)
    {
        scanf("%d %d",&u,&v);
        indx[u]++;
        indx[v+1]--;
    }
    /*for(int i=1;i<=n;i++)
    {
        cout<<indx[i]<<endl;
    }*/
    for(int i=2;i<=n;i++)
    {
        indx[i]+=indx[i-1];
    }
    /*for(int i=1;i<=n;i++)
    {
        cout<<indx[i]<<endl;
    }*/
    sort(indx+1,indx+n+1);
    long long sum = 0;
    for(int i=1;i<=n;i++)
    {
        sum+=(indx[i]*1LL*a[i]);
    }
    printf("%I64d",sum);
}
