#include<bits/stdc++.h>
using namespace std;
int main()
{
long long a,b;
while(1)
{
    cin >> a >> b;
    if(!a && !b)
        break;
    long long swap,m,n,carry=0,count=0;
    if(b>a){
        swap=a;
        a=b;
        b=swap;
    }
    m=a;n=b;
    while(m)
    {
        if(m%10+n%10+carry>=10)
        {
            carry=1;
            count++;
        }
        else if(m%10+n%10+carry<10)
        {
            carry=0;
        }
        m=m/10;
        n=n/10;
    }
if(count==1)
    cout<<count<<" carry operation.";
else if(count>1)
    cout<<count<<" carry operations.";
else if(count==0)
    cout<<"No carry operation.";
cout<<endl;
}
return 0;
}
