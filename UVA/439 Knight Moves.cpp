#include<bits/stdc++.h>
using namespace std;

string S,D;

int dr[]={-2 , -2 , -1 , -1 , 1 , 1 , 2 , 2};
int dc[]={-1 , 1 , -2 , 2 , -2 , 2 , -1 , 1};

int grid[9][9];
int visited[9][9];

queue<pair<int,int> >bfs1;

void bfs(int,int);

int main()
{
    //freopen("bak.txt","r",stdin);
    while(cin>>S>>D)
    {
        memset(visited,0,sizeof visited);
        memset(grid,0,sizeof grid);
        bfs1=queue<pair<int,int> >();
        for(int i=0;i<9;i++){
            visited[i][0]=1;
            visited[0][i]=1;}
        int sx,sy;
        int dx,dy;
        sx=S[0]-'a'+1;
        sy=S[1]-'0';
        dx=D[0]-'a'+1;
        dy=D[1]-'0';
        bfs(sx,sy);
        cout<<"To get from "<<S<<" to "<<D<<" takes "<<grid[dx][dy]<<" knight moves."<<endl;
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
        for(int i=0;i<8;i++)
        {
            int tx=no.first+dr[i];
            int ty=no.second+dc[i];
            if(tx>=1 && tx<=8 && ty>=1 && ty<=8 && !visited[tx][ty])
            {
                bfs1.push(make_pair(tx,ty));
                grid[tx][ty]=grid[no.first][no.second]+1;
                visited[tx][ty]=1;
            }
        }
    }
}
