#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
long long n,m;
while((scanf("%I64d%I64d",&n,&m))==2)
{
    cout<<(m+1)*n<<endl;
}
return 0;
}
