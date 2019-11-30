#include<bits/stdc++.h>
using namespace std;

map<string,string>parent;
map<string,int>tracker;
int mx;

void makeset(string n)
{
    parent[n]=n;
    tracker[n]=1;
}

string find(string x)
{
    if(x==parent[x])
        return x;
    return parent[x]=find(parent[x]);
}

void union1(string x,string y)
{
    string a=find(x);
    string b=find(y);
    if(a!=b)
    {
        parent[a]=b;
        tracker[b]=tracker[a]+tracker[b];
        mx=max(mx,tracker[b]);
    }
}

int main()
{
    int c,r;
    string s,g;
    while(~scanf("%d %d",&c,&r))
    {
        if(c==0 && r==0)
            break;
        mx=1;
        parent.clear();
        tracker.clear();
        for(int i=0;i<c;i++)
        {
            cin>>s;
            makeset(s);
        }
        for(int i=0;i<r;i++)
        {
            cin>>s>>g;
            union1(s,g);
        }

        cout<<mx<<endl;
    }
    return 0;
}
