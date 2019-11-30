#include<bits/stdc++.h>
using namespace std;
 
int n=100000000;
int status[100000000/32]; //indicates primality using eacb bit.in here 3*32=96 numbers can be represented
 
bool check(int N,int pos)
{
    return (bool)(N&(1<<pos)); //grabbing the particular bit
}
int set1(int N,int pos)
{
    return N=N|(1<<pos); //changing N
}
int main()
{
int i,j,sq;
sq=int(sqrt(n));
for(i=3;i<=sq;i+=2)
{
    if(!check(status[i>>5],i&31))
    {
        for(j=i*i;j<=n;j+=2*i)
        {
            status[j>>5]=set1(status[j>>5],j&31);
        }
    }
}
cout<<"2"<<endl;
long long y=1;
for(i=3;i<=n;i+=2)
{
    if(!check(status[i>>5],i&31))
    {
        y++;
        if((y%100)==1)
            cout<<i<<endl;
    }
}
return 0;
}
 
