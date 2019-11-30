#include<bits/stdc++.h>
using namespace std;

typedef pair<double,double> coordinates;
typedef pair<int,double> connect;

vector<coordinates>inp;
vector<connect>gr[101];

int taken[101];
double dis[101];

struct Node{
    int now;
    double cost;
    Node(int _now,double _cost)
    {
        now=_now;
        cost=_cost;
    }
};

bool operator<(Node A,Node B)
{
    return (double)A.cost>(double)B.cost;
}

priority_queue<Node>pq;

double prim(int s,int vertex)
{
    memset(taken,0,sizeof taken);
    for(int i=0;i<101;i++)
        dis[i]=100000000.000;
    pq.push(Node(s,0.0));
    dis[s]=0.0;
    double res=0.0;
    while(!pq.empty())
    {
        Node u=pq.top();
        pq.pop();
        if(taken[u.now])
            continue;
        taken[u.now]=1;
        res+=u.cost;
        for(int i=0;i<gr[u.now].size();i++)
        {
            connect v=gr[u.now][i];
            if(taken[v.first])
                continue;
            if(v.second<dis[v.first])
            {
                pq.push(Node(v.first,v.second));
                dis[v.first]=v.second;
            }
        }
    }
    return res;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        inp.clear();
        for(int i=0;i<101;i++)
            gr[i].clear();
        int m;
        cin>>m;
        inp.push_back(make_pair(0.0,0.0));
        for(int i=1;i<=m;i++)
        {
            double x,y;
            cin>>x>>y;
            inp.push_back(make_pair(x,y));
        }
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(i!=j)
                {
                    double q=pow(abs( (inp[i].first - inp[j].first) ) , 2.0);
                    double w=pow(abs( (inp[i].second - inp[j].second) ) , 2.0);
                    double distance = sqrt( q+w );
                    gr[i].push_back(make_pair(j,distance));
                }
            }
        }
        double res=prim(1,m);
        cout<<fixed<<setprecision(2)<<res<<endl;
        if(t>0)cout<<endl;
    }
    return 0;
}
