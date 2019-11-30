#include<stdio.h>

int main()
{
int arr[1005],n,i,t=0,j,test,swap,m=0;
scanf("%d",&test);
while(t!=test)
{
scanf("%d",&n);

for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

for(i=0;i<n-1;i++)
    for(j=0;j<n-i-1;j++)
    {
    if(arr[j]>arr[j+1])
    {
        swap=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=swap;
        m++;
    }
    }
printf("Optimal train swapping takes %d swaps.\n",m);
m=0;
t++;
}
return 0;
}
