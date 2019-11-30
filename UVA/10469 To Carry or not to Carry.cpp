#include<iostream>
using namespace std;

int main()
{
long long int n,m;
while(!cin.eof())
{
    cin>>n>>m;
if(!cin.eof())
    cout<<(n^m)<<endl;
}
return 0;
}
