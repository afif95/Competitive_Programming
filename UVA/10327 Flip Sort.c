#include<stdio.h>

int main()
{
int arr[1005],n,i,j,swap,m=0;

while(scanf("%d",&n)!=EOF)
{
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
printf("Minimum exchange operations : %d\n",m);
m=0;
}

return 0;
}
