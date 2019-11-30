#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
vector<ll>gr[1000002];
ll visited[1000002];
ll parent[1000002];
ll ret;
 
void dfs(ll u,ll b,ll fixed)
{
    visited[u]=fixed;
    b--;
    for(ll i=0;i<gr[u].size();i++)
    {
        ll v=gr[u][i];
        if(parent[u]==v)
            continue;
        if((!visited[v] || visited[v]==fixed) && b>=0){
            parent[v]=u;
            dfs(v,b,fixed);}
        else if(visited[v]!=fixed && b>=0){
            ret=1;
            return;}
        else if(b<0)
            return;
    }
}
 
int main()
{
    //freopen("fdf.txt","r",stdin);
    ll t;
    cin>>t;
    while(t--)
    {
        memset(visited,0,sizeof visited);
        memset(parent,0,sizeof parent);
        ll n,r,m ;
        cin>>n>>r>>m;
        for(ll i=0;i<=1000002;i++)
            gr[i].clear();
        for(ll i=0;i<r;i++)
        {
            ll x,y;
            cin>>x>>y;
            gr[x].push_back(y);
            gr[y].push_back(x);
        }
        ret=0;
        for(ll i=1;i<=m;i++)
        {
            ll a,b;
            cin>>a>>b;
            if(visited[a])
                ret=1;
            else
                dfs(a,b,a);
        }
        if(ret)
            cout<<"No"<<endl;
        else
        {
            for(ll i=1;i<=n;i++)
            {
                if(!visited[i])
                {
                    cout<<"No"<<endl;
                    ret=1;
                    break;
                }
            }
            if(!ret)
                cout<<"Yes"<<endl;
        }
    }
    return 0;
}
 
