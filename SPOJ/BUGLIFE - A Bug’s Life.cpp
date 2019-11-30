#include<bits/stdc++.h>
using namespace std;
 
vector<int>gr[2001];
int visited[2001];
int gender[2001];
int ret;
int dfs(int);
 
int main()
{
    int t;
    cin>>t;
    int i=0;
    while(i!=t)
    {
        ret=0;
        memset(visited,0,sizeof visited);
        memset(gender,-1,sizeof gender);
        for(int i=0;i<2001;i++)
            gr[i].clear();
        int n,r;
        cin>>n>>r;
        for(int i=0;i<r;i++)
        {
            int x,y;
            cin>>x>>y;
            gr[x].push_back(y);
            gr[y].push_back(x);
        }
        for(int i=1;i<=n;i++)
        {
            if(!visited[i])
                ret=dfs(i);
        }
        cout<<"Scenario #"<<i+1<<":"<<endl;
        if(ret)
            cout<<"Suspicious bugs found!"<<endl;
        else if(!ret)
            cout<<"No suspicious bugs found!"<<endl;
        i++;
    }
    return 0;
}
 
int dfs(int s)
{
    visited[s]=1;
    if(gender[s]==-1)
        gender[s]=0;
    for(int i=0;i<gr[s].size();i++)
    {
        int v=gr[s][i];
        if(!visited[v])
        {
            if(gender[s]==0)
                gender[v]=1;
            else if(gender[s]==1)
                gender[v]=0;
            ret=dfs(v);
        }
        else
        {
            if(gender[s]==0)
            {
                if(gender[v]==0)
                    return 1;
            }
            else if(gender[s]==1)
            {
                if(gender[v]==1)
                    return 1;
            }
        }
    }
    return ret;
}
 

