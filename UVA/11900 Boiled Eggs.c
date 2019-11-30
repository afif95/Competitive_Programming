#include<stdio.h>
int main()
{
int t,n,p,q,i,j,k,w=0,c=1,v=0,arr[30];

scanf("%d",&t);

while(c!=t+1){
scanf("%d %d %d",&n,&p,&q);

for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            k=arr[i];
            arr[i]=arr[j];
            arr[j]=k;
        }
    }
}
for(i=0;i<n;i++){
        w+=arr[i];
        v++;
        if(v>p || w>q){
            v--;
            break;
}}

printf("Case %d: %d\n",c,v);
c++;v=0;w=0;
}
return 0;
}
