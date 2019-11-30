#include<stdio.h>
int main()
{
int n,i,m,t=1,test,arr[13];
scanf("%d",&test);
while(t!=test+1)
{
scanf("%d",&n);
if((n&1) && n!=1){

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
i=0;
    for(m=3;m<=n;m+=2)
        i++;

printf("Case %d: %d\n",t,arr[i]);
t++;
}
}
return 0;
}
