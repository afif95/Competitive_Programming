#include<iostream>
using namespace std;
int main()
{
    int arr[505],arr1[505],i,j=1,n,k,sum=0,sum1=0,c;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    arr1[0]=arr[0];
    for(i=1;i<n;i++)
    {
        c=arr[i-1]+arr[i];
        if(c<k)
        {
 
 
            arr1[j]=k-c+arr[i];
            arr[i]=arr1[j];
            j++;
 
        }
        else
        {
 
 
            arr1[j]=arr[i];
 
 
            j++;
        }
 
    }
    for(i=0;i<n;i++)
    {
        sum1=sum1+arr1[i];
    }
    cout<<sum1-sum<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
}
