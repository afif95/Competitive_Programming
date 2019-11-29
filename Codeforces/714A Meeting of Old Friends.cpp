#include<iostream>
using namespace std;
 
int main()
{
    long long l1,l2,r1,r2,k;
    cin>>l1>>r1>>l2>>r2>>k;
        if((l2>=l1 && l2<=r1) && (r2>=l1 && r2<=r1))
        {
            if(k>=l2 && k<=r2)
            cout<<r2-l2<<endl;
            else
                cout<<r2-l2+1<<endl;
        }
        else if((l2<l1) && (r2>=l1 && r2<=r1))
        {
            if(k>=l1 && k<=r2)
            cout<<r2-l1<<endl;
            else
                cout<<r2-l1+1<<endl;
        }
        else if((l2>=l1 && l2<=r1) && (r2>r1))
        {
            if(k>=l2 && k<=r1)
            cout<<r1-l2<<endl;
            else
                cout<<r1-l2+1<<endl;
        }
        else if((l2<l1) && (r2>r1))
        {
            if(k>=l1 && k<=r1)
            cout<<r1-l1<<endl;
            else
                cout<<r1-l1+1<<endl;
        }
        else
            cout<<0<<endl;
}
