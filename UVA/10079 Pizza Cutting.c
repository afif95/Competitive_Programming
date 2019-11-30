#include<stdio.h>
int main()
{
long long int n,i,j,k;
while(scanf("%lld",&n)==1){
        if(n>=0){
j=2;
for(i=1;i<=n;i++){
    if(i>=2){
        k=i+j;
        j=k;
    }
}
if(n==1){
    printf("%lld\n",j);
    j=0;
}
else if(n==0){
    printf("%lld\n",j-1);
}
else{
    printf("%lld\n",k);
    j=0;
}
}}
return 0;
}
