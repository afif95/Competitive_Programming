#include<iostream>
using namespace std;

int main()
{
int t,x1,y1,x2,y2,x,y,m;
cin>>t;
for(int i=1;i<=t;i++)
{
    cout<<"Case "<<i<<":"<<endl;
    cin>>x1>>y1>>x2>>y2;
    if(x1>x2)
    {
        swap(x1,x2);swap(y1,y2);
    }
    cin>>m;
    for(int j=0;j<m;j++)
    {
        cin>>x>>y;
        if( (x>x1&&x<x2) && (y>y1&&y<y2) )
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
return 0;
}
