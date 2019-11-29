
#include<iostream>
#include<cstdio>
using namespace std;
 
int main()
{
int n;
while((scanf("%d",&n))==1){
int swap,i,j,a[100],l=0,r,c,m=1;
 
for(i=0;i<n;i++)
cin>>a[i];
 
for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++)
    {
        if(a[j]<a[j+1])
        {
            swap=a[j];
            a[j]=a[j+1];
            a[j+1]=swap;
        }
    }
}
c=0;
i=0;
do{
        r=0;
   l+=a[i];
    for(j=i+1;j<n;j++)
        r+=a[j];
    i++;c++;
}while(l<=r);
cout<<c<<endl;
}
return 0;
}
