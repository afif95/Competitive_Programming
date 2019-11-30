#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
int n,m,sum=0;
cin>>n;
vector<int>s;
for(int i=0;i<n;i++)
{
    cin>>m;
    s.push_back(m);
}
sort(s.begin(),s.end());
for(int i=1;i<=n;i++)
{
    sum+=s[i-1]/2+1;
    if(i>n/2)
        break;
}
cout<<sum<<endl;
return 0;
}
