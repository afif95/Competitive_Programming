#include<bits/stdc++.h>
using namespace std;

int R,C;

int dr[]={-1,0,1,0};
int dc[]={0,1,0,-1};

int grid[1000][1000];
int visited[1000][1000];

queue<pair<int,int> >bfs1;

void bfs(int,int);

int main()
{
    //freopen("bomb.txt","r",stdin);
    while(1)
    {
        memset(visited,0,sizeof visited);
        memset(grid,0,sizeof grid);
        bfs1=queue<pair<int,int> >();
        cin>>R>>C;
        if(!(R || C))
            break;
        int num;
        cin>>num;
        for(int j=0;j<num;j++)
        {
            int x,y,z;
            cin>>x>>y;
            for(int i=0;i<y;i++)
            {
                cin>>z;
                visited[x][z]=1;
            }
        }
        int sx,sy;
        cin>>sx>>sy;
        int dx,dy;
        cin>>dx>>dy;
        bfs(sx,sy);
        cout<<grid[dx][dy]<<endl;
    }
    return 0;
}

void bfs(int sx,int sy)
{
    grid[sx][sy]=0;
    visited[sx][sy]=1;
    bfs1.push(make_pair(sx,sy));
    while(!bfs1.empty())
    {
        pair<int,int>no;
        no=bfs1.front();
        bfs1.pop();
        for(int i=0;i<4;i++)
        {
            int tx=no.first+dr[i];
            int ty=no.second+dc[i];
            if(tx>=0 && tx<R && ty>=0 && ty<C && !visited[tx][ty])
            {
                bfs1.push(make_pair(tx,ty));
                grid[tx][ty]=grid[no.first][no.second]+1;
                visited[tx][ty]=1;
            }
        }
    }
}
