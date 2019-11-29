#include<iostream>
#include<cstdio>
using namespace std;
 
int main()
{
int n,p,q;
while((scanf("%d",&n))==1)
{
    if(n==1)
    {
        cin>>p;
        if(p==15)
            cout<<"DOWN"<<endl;
        else if(p==0)
            cout<<"UP"<<endl;
        else
        cout<<-1<<endl;
        continue;
    }
    for(int i=0;i<n;i++)
    {
        if(i&1)
            cin>>q;
        else
            cin>>p;
    }
    if(n&1)
    {
        if(p==15)
            cout<<"DOWN"<<endl;
        else if(p==0)
            cout<<"UP"<<endl;
        else
        {
            if(p-q<0)
            {
                cout<<"DOWN"<<endl;
            }
            else if(p-q>0)
            {
                cout<<"UP"<<endl;
            }
        }
    }
    else
    {
        if(q==15)
            cout<<"DOWN"<<endl;
        else if(q==0)
            cout<<"UP"<<endl;
        else
        {
            if(q-p<0)
            {
                cout<<"DOWN"<<endl;
            }
            else if(q-p>0)
            {
                cout<<"UP"<<endl;
            }
        }
    }
}
}

