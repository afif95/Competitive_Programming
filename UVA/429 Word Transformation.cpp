#include<bits/stdc++.h>
using namespace std;

map<int,vector<string> >dic;
map<string,int>visited;
map<string,int>dis;
queue<string>bfs1;

void bfs(string s)
{
    visited[s]=1;
    dis[s]=0;
    bfs1.push(s);
    while(!bfs1.empty())
    {
        string u=bfs1.front();
        bfs1.pop();
        for(vector<string>::iterator it=dic[u.size()].begin();it!=dic[u.size()].end();it++)
        {
            string v=*it;
            if(!visited[v])
            {
                int count=0;
                for(int i=0;i<v.size();i++)
                {
                    if(u[i]!=v[i])
                        count++;
                }
                if(count==1)
                {
                    visited[v]=1;
                    dis[v]=dis[u]+1;
                    bfs1.push(v);
                }
            }
        }
    }
}

int main()
{
    //freopen("as.txt","r",stdin);
    int t;
    cin>>t;
    int y=0;
    while(t--)
    {
        dic.clear();
        visited.clear();
        dis.clear();
        bfs1=queue<string>();
        string abj;
        while(abj!="*")
        {
            cin>>abj;
            dic[abj.size()].push_back(abj);
        }
        char ch=getchar();
        while(true)
        {
            visited.clear();
            dis.clear();
            bfs1=queue<string>();
            string start,end,line;
            if(!getline(cin,line))
                break;
            if(line.empty())
                break;
            int i=0;
            while(line[i]!=' ')
            {
                start.push_back(line[i]);
                i++;
            }
            i=i+1;
            for(;i<line.size();i++)
            {
                end.push_back(line[i]);
            }
            if(y){
                cout<<endl;y=0;}
            bfs(start);
            cout<<start<<" "<<end<<" "<<dis[end]<<endl;
        }
        y=1;
    }
    return 0;
}
