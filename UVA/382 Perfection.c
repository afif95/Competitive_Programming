#include<stdio.h>

int main()
{
int arr[100],sum[100];
int i=0,m,n,j,k;

while(1){
    scanf("%d",&arr[i]);
    if(arr[i]==0)
        break;
    i++;
}

for(j=0;j<i;j++){
    sum[j]=0;
    for(k=1;k<arr[j];k++)
        {
            m=arr[j]/k;
            n=k*m;
            if((arr[j]-n)!=0)
                continue;
                sum[j]+=k;
        }
}
printf("PERFECTION OUTPUT\n");

for(j=0;j<i;j++){
        printf("%5d  ",arr[j]);
    if(sum[j]==arr[j])
        printf("PERFECT\n");

    else if(sum[j]<arr[j])
        printf("DEFICIENT\n");

    else
        printf("ABUNDANT\n");
}
    printf("END OF OUTPUT\n");

}
