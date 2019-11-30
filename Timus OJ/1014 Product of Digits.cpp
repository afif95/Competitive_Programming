#include<bits/stdc++.h>
using namespace std;

int main()
{
long long n,m;
vector<long long> str;
while(cin>>n)
{
    if(n==0){
        cout<<10<<endl;continue;}
    else if(n<10){
        cout<<n<<endl;continue;}
    m=1;
    while((long long)log10(n)!=0 && m)
    {
        m=0;
        for(long long i=9;i>2;i--)
        {
            if((n%i)==0 && (n%i)!=1)
            {
                str.push_back(i);
                n=n/i;
                m=1;
                break;
            }
        }
    }
    if((long long)log10(n)==0){
        str.push_back(n);
        reverse(str.begin(),str.end());
        for(long long j=0;j<str.size();j++)
            cout<<str[j];
        cout<<endl;
    }
    else
        cout<<-1<<endl;
    str.clear();
}
return 0;
}
