#include<bits/stdc++.h>
using namespace std;

map<string,vector<string> > gr;
map<string,int>visited;
map<string,string>parent;

queue<string>bfs1;

int bfs(string,string);
void print(string,string);

int main()
{
    int n;
    int f=0;
    while(cin>>n)
    {
        gr.clear();
        visited.clear();
        parent.clear();
        bfs1=queue<string>();

        for(int i=0;i<n;i++)
        {
            string a,b;
            cin>>a>>b;
            gr[a].push_back(b);
            gr[b].push_back(a);
        }
        string source,des;
        cin>>source>>des;
        if(f)cout<<endl;
        f=1;
        if(!bfs(source,des))
            cout<<"No route"<<endl;
        else
            print(parent[des],des);
    }
    return 0;
}

int bfs(string s,string d)
{
    visited[s]=1;
    parent[s]="\0";
    bfs1.push(s);
    while(!bfs1.empty())
    {
        string u=bfs1.front();
        bfs1.pop();
        if(u==d)
            return visited[d];
        for(int i=0;i<gr[u].size();i++)
        {
            string v=gr[u][i];
            if(!visited[v])
            {
                visited[v]=1;
                parent[v]=u;
                bfs1.push(v);
            }
        }
    }
    return visited[d];
}

void print(string ps,string d)
{
    if(ps=="\0")
        return;
    print(parent[ps],ps);
    cout<<ps<<" "<<d<<endl;
}
