#include<bits/stdc++.h>
using namespace std;

struct edge{
    int u,v;
};

vector<edge>gr;
int parent[30];
int rank1[30];

int find(int x)
{
    if(parent[x]==x)
        return x;
    return parent[x]=find(parent[x]);
}

int subgraph(int c)
{
    int sz=gr.size();
    for(int i=0;i<=c;i++){
        parent[i]=i;
        rank1[i]=0;}
    for(int i=0;i<sz;i++)
    {
        int a=find(gr[i].u);
        int b=find(gr[i].v);
        if(a!=b){
        if(rank1[a]<rank1[b])
            parent[a]=b;
        else{
            parent[b]=a;
            if(rank1[a]==rank1[b])
                rank1[a]++;
        }
        c--;
        }
    }
    return c;
}

int main()
{
    int t;
    string s;
    char ch;
    edge j;
    scanf("%d\n\n",&t);
    for(int tc=1;tc<=t;tc++)
    {
        getline(cin,s);
        ch=s[0];
        gr.clear();
        while(1)
        {
            if(!getline(cin,s) || s.empty()) break;
            j.u=s[0]-'A'+1;
            j.v=s[1]-'A'+1;
            gr.push_back(j);
        }
        int res=subgraph(int(ch-'A'+1));
        if(tc!=1)
            printf("\n");
        printf("%d\n",res);
    }
    return 0;
}
