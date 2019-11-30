#include<bits/stdc++.h>
using namespace std;

map<long long int,vector<long long int> >gr;
map<long long int,long long int>af;
map<long long int,long long int>visited;
map<long long,long long>node;
void bfs(long long int a)
{
    queue<long long int>bfs1;
    visited[a]=1;
    bfs1.push(a);
    af[a]=0;
    while(!bfs1.empty())
    {
        long long int u=bfs1.front();
        bfs1.pop();
        for(long long int i=0;i<gr[u].size();i++)
        {
            long long int v=gr[u][i];
            if(!visited[v])
            {
                visited[v]=1;
                bfs1.push(v);
                af[v]=af[u]+1;
            }
        }
    }
}
int main()
{
    long long int edge;
    cin>>edge;
    long long int no=1;
    while(edge)
    {
        gr.clear();
        visited.clear();
        af.clear();
        node.clear();
        for(long long int i=0;i<edge;i++)
        {
            long long int x,y;
            cin>>x>>y;
            gr[x].push_back(y);
            gr[y].push_back(x);
            node[x]=node[y]=1;
        }

        long long int source,ttl;
        cin>>source>>ttl;
        while(source || ttl)
        {
            bfs(source);
            long long int count=0;
            for(map<long long int,long long int>::iterator it=af.begin();it!=af.end();it++)
            {
                if(it->second > ttl)
                    count++;
                else if(it->first!=source && !it->second)
                    count++;
            }
            count+=node.size()-af.size();
            af.clear();
            visited.clear();
            cout<<"Case "<<no<<": "<<count<<" nodes not reachable from node "<<source<<" with TTL = "<<ttl<<"."<<endl;
            no++;
            cin>>source>>ttl;
        }
        cin>>edge;
    }
return 0;
}
