#include<bits/stdc++.h>
using namespace std;

queue<int>pq;
vector<int>gr[200];
int color[200];
int visited[200];

int bfs(int s)
{
    visited[s]=1;
    color[s]=0;
    pq.push(s);

    while(!pq.empty())
    {
        int u=pq.front();
        pq.pop();
        for(int i=0;i<gr[u].size();i++)
        {
            int v=gr[u][i];
            if(color[u]==color[v]){
                return 0;}
            if(!visited[v])
            {
                pq.push(v);
                visited[v]=1;
                if(color[u]==1)
                    color[v]=0;
                else if(color[u]==0)
                    color[v]=1;
            }
        }
    }
    return 1;
}

int main()
{//freopen("assd.txt","r",stdin);
    int node,edge;
    while(1)
    {
        memset(color,-1,sizeof color);
        memset(visited,0,sizeof visited);
        pq=queue<int>();
        cin>>node;
        if(!node)
            break;
        for(int i=0;i<node;i++)
            gr[i].clear();
        cin>>edge;
        for(int i=0;i<edge;i++)
        {
            int x,y;
            cin>>x>>y;
            gr[x].push_back(y);
            gr[y].push_back(x);
        }
    int r;
    for(int i=0;i<node;i++){
        if(!visited[i])
             r=bfs(i);}
    if(r)
        cout<<"BICOLORABLE."<<endl;
    else
        cout<<"NOT BICOLORABLE."<<endl;
    }
    return 0;
}
