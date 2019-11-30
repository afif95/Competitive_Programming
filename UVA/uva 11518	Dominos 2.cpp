#include<bits/stdc++.h>
using namespace std;

void dfs(int source,vector<vector<int> >*g,vector<int>*visited)
{
    visited->at(source)=1;
    for(int i=0;i<g->at(source).size();i++)
    {
        int v=g->at(source)[i];
        if(!visited->at(v))
        {
            dfs(v,g,visited);
        }
    }
}
bool counted(int i){return i==1;}
int main()
{
    //freopen("neh.txt","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,l;
        cin>>n>>m>>l;
        vector<vector<int> >gr(n+1);
        vector<int>visited(n+1,0);
        for(int i=0;i<m;i++)
        {
            int x,y;
            cin>>x>>y;
            gr[x].push_back(y);
        }
        for(int i=0;i<l;i++)
        {
            int h;
            cin>>h;
            dfs(h,&gr,&visited);
        }
        cout<<count_if(visited.begin(),visited.end(),counted)<<endl;
    }
    return 0;
}
