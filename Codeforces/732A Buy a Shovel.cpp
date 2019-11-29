#include<iostream>
using namespace std;
int main()
{
    int i,j,k,r,n;
    cin>>n>>r;
    for(i=1;i<=10;i++)
    {
        if((n*i%10)==0 || (n*i%10==r))
            break;
    }
    cout<<i<<endl;
}
