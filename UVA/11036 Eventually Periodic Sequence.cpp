#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll floyd(ll n,ll N,string sad)
{
    stack< ll >st;
    ll x=n;
    for(string::iterator it=sad.begin(); it!=sad.end(); ++it)
    {
        if(*it=='x')
        {
            st.push(x);
        }
        else if(*it=='+' || *it=='*' || *it=='%')
        {
            if(*it=='+')
            {
                ll a=st.top();st.pop();
                ll b=st.top();st.pop();
                st.push((a+b)%N);
            }
            if(*it=='*')
            {
                ll a=st.top();st.pop();
                ll b=st.top();st.pop();
                st.push((a*b)%N);
            }
            if(*it=='%')
            {
                ll a=st.top();st.pop();
                st.push((a%N)%N);
            }
        }
        else if(*it>='0' && *it<='9')
        {
            string garbage;
            while(*it!=' ')
            {
                garbage.push_back(*it);
                ++it;
            }
            ll aer;
            stringstream convert(garbage);
            convert>>aer;
            st.push(aer);
        }
    }
    ll res=st.top();
    st.pop();
    return res;
}

int main()
{
while(1)
{
    ll N,n;
    scanf("%lld %lld",&N,&n);
    if(!N)
        break;
    string sad;
    getline(cin,sad);

    ll hare=floyd(n,N,sad) ;
    ll tortoise=floyd(n,N,sad);

    hare=floyd(floyd(hare,N,sad),N,sad);
    tortoise=floyd(tortoise,N,sad);

    while(hare!=tortoise)
    {
        hare=floyd( floyd(hare,N,sad) ,N,sad );
        tortoise=floyd(tortoise,N,sad);
    }
    tortoise=floyd(tortoise,N,sad);
    ll count=1;
    while(hare!=tortoise)
    {
        tortoise=floyd(tortoise,N,sad);
        count++;
    }
    printf("%lld\n",count);
}
return 0;
}
