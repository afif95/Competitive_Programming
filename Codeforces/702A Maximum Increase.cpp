#include<iostream>
#include<cstdio>
using namespace std;
 
int main()
{
long max=0,c=1;
long n;
while((scanf("%ld",&n))==1)
{
    long a[n];
    for(long i=0;i<n;i++)
        cin>>a[i];
    for(long i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
            c++;
        else if(a[i]<=a[i-1])
        {
            if(c>max)
                max=c;
            c=1;
        }
    }
    if(c>max)
    max=c;
cout<<max<<endl;
max=0;c=1;
}
 
return 0;
}

