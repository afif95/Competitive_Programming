#include<iostream>
#include<cstdio>
using namespace std;
 
int main()
{
int n;
while((scanf("%d",&n))==1)
{
    long long int a[n],p,q=-1,r=-1,m=1,min=1000000001,mid,max=-1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(!i)
            p=a[i];
        else{
            if(a[i]!=p && q==-1 && r==-1)
                q=a[i];
            else if(a[i]!=p && a[i]!=q && q!=-1 && r==-1)
                r=a[i];
            else if(a[i]!=p && a[i]!=q && a[i]!=r && q!=-1 && r!=-1)
                m=0;
        }
    }
    if(r==-1 || (q==-1 && r==-1))
    {
        cout<<"YES"<<endl;
        continue;
    }
    if(p<min)
    {
        min=p;
        if(q<min)
            min=q;
        if(r<min)
            min=r;
    }
    if(p>max)
    {
        max=p;
        if(q>max)
            max=q;
        if(r>max)
            max=r;
    }
    if((p==min && q==max) || (p==max && q==min))
        mid=r;
    else if((p==min && r==max) || (p==max && r==min))
        mid=q;
    else if((q==min && r==max) || (q==max && r==min))
        mid=p;
 
    if(max-mid==mid-min && m)
        m=1;
    else
        m=0;
    if(m)
        cout<<"YES"<<endl;
    else if(!m)
        cout<<"NO"<<endl;
}
}

