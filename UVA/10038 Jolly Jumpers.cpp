#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
using namespace std;
int compare(const void *a,const void *b)
{
  return(*(int*)a-*(int*)b);
}
int main()
{
    int n;
    while(cin>>n)
    {
    int arr[n],dif[n-1],count=1,check=0;
    for(int i=0;i<n;i++)
    {
        if(!i)
            cin>>arr[i];
        else
        {
            cin>>arr[i];
            dif[i-1]=abs(arr[i]-arr[i-1]);
        }
    }
    qsort(dif,n-1,sizeof(int),compare);
    for(int i=0;i<n-1;i++)
    {
        if(count!=dif[i])
        {
            check=1;
            cout<<"Not jolly"<<endl;
            break;
        }
        count++;
    }
    if(!check)
        cout<<"Jolly"<<endl;
    }
    return 0;
}

