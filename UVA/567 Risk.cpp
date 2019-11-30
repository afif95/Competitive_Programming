#include<bits/stdc++.h>
using namespace std;

vector < int > gr[21];
int visited[21];
int dis[21];
queue < int  > bfs1;
vector < pair < int , int > > res;
vector < int > res_dis;

void bfs(int);

int main()
{
    //freopen("se.txt","r",stdin);
    int k=1,vega;
    while(cin >> vega)
    {
    for(int i=1;i<=19;i++)
    {
        int n;
        if(i==1)
            n=vega;
        else
            cin >> n;

        for(int j=1;j<=n;j++)
        {
            int m;
            cin >> m;
            gr[i].push_back(m);
            gr[m].push_back(i);
        }
    }
    int l;
    cin >> l;
    for(int i=1;i<=l;i++)
    {
        memset(visited,0,sizeof visited);
        memset(dis,0,sizeof dis);
        bfs1=queue < int >();
        int s,d;
        cin >> s >> d;
        bfs(s);
        res.push_back ( make_pair( s , d ) ) ;
        res_dis.push_back( dis[d] );
    }
    cout<<"Test Set #"<<k<<endl;
    for(int i=0;i<res.size();i++){
        cout.setf(ios::right);
        cout.width(2);
        cout.fill(' ');
        cout<<res[i].first;
        cout.width(4);
        cout<<" to ";
        cout.width(2);
        cout.fill(' ');
        cout<<res[i].second;
        cout.width(2);
        cout<<": ";
        cout.setf(ios::left);
        cout<<res_dis[i]<<endl;
    }
    k++;
    cout<<endl;
    for(int i=0;i<21;i++)
        gr[i].clear();
    res.clear();
    res_dis.clear();
    }
    return 0;
}

void bfs(int source)
{
    visited[source]=1;
    bfs1.push(source);
    dis[source]=0;
    while(!bfs1.empty())
    {
        int u=bfs1.front();
        bfs1.pop();
        for(int i=0;i<gr[u].size();i++)
        {
            int v=gr[u][i];
            if(!visited[v])
            {
                visited[v]=1;
                bfs1.push(v);
                dis[v]=dis[u]+1;
            }
        }
    }
}
