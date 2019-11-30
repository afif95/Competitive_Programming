#include<stdio.h>
int main()
{
int t,n,k,p,c=1,i,j;

scanf("%d",&t);

while(c!=t+1){
scanf("%d %d %d",&n,&k,&p);

for(i=1;i<=p;i++){
    k++;
    if(k>n){
        k=1;
    }
j=k;
}
printf("Case %d: %d\n",c,j);
c++;
}

return 0;
}
