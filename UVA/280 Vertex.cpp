#include<bits/stdc++.h>
using namespace std;

vector<int>gr[103];
int visited[103];

void dfs(int source)
{
    for(int i=0;i<gr[source].size();i++)
    {
        int v=gr[source][i];
        if(!visited[v]){
            visited[v]=1;
            dfs(v);
        }
    }
}

int main()
{
    int n;
    while(scanf("%d",&n))
    {
        if(!n)break;
        for(int i=0;i<103;i++)
            gr[i].clear();
        int a;
        while(scanf("%d",&a))
        {
            if(!a)break;
            int y;
            while(scanf("%d",&y))
            {
                if(!y)break;
                gr[a].push_back(y);
            }
        }
        int m;
        cin>>m;
        while(m--)
        {
            int s;
            cin>>s;
            int count=0;
            memset(visited,0,sizeof visited);
            dfs(s);
            for(int j=1;j<=n;j++)
            {
                if(!visited[j])
                    count++;
            }
            cout<<count;
            for(int j=1;j<=n;j++)
                if(!visited[j])
                    cout<<" "<<j;
            cout<<endl;
        }
    }
    return 0;
}
