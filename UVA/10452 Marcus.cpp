#include<bits/stdc++.h>
using namespace std;

int x[3]={-1,0,0};
int y[3]={0,+1,-1};
string aba="IEHOVA#";
int tracker;

void dfs(int tx,int ty,int n,vector<vector<char> >*g)
{
    for(int i=0;i<3;i++)
    {
        if(tx+x[i]<0 || ty+y[i]<0 || ty+y[i]>=n)
            continue;
        int a=tx+x[i];
        int b=ty+y[i];
        if(g->at(a)[b]==aba[tracker])
        {
            if(i==0){
                cout<<"forth";
            if(aba[tracker]!='#')
                cout<<" ";}
            else if(i==1){
                cout<<"right";
            if(aba[tracker]!='#')
                cout<<" ";}
            else if(i==2){
                cout<<"left";
            if(aba[tracker]!='#')
                cout<<" ";}
            tracker++;
            dfs(a,b,n,g);
        }
    }
}

int main()
{
    //freopen("again.txt","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        tracker=0;
        int m,n;
        cin>>m>>n;
        vector<vector<char> >gr(m);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                char ch;
                cin>>ch;
                gr[i].push_back(ch);
            }
        }
        for(int i=0;i<n;i++)
            if(gr[m-1][i]=='@'){
                dfs(m-1,i,n,&gr);
                break;
            }
        cout<<endl;
    }
    return 0;
}
