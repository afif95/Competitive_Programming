#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<stack>
using namespace std;

int main()
{
    stack<long long>st;
    long long n;
    while(cin>>n)
    {
        st.push(n);
    }
    while(!st.empty())
    {
        cout<<fixed<<setprecision(4)<<sqrt(st.top())<<endl;
        st.pop();
    }


    return 0;
}
