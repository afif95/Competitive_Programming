#include<stdio.h>
int main()
{
long long int i,j,m,n,c,a,big,count;
while(scanf("%lld %lld",&i,&j)==2){
printf("%lld %lld",i,j);
if(i>j){
    c=i;
    i=j;
    j=c;
}
for(m=i;m<=j;m++){
        count=1;
        n=m;
while(n!=1){
      if(n%2==1){
         n=3*n+1;
            count++;
            }
      else if(n%2==0){
         n=n/2;
            count++;
            }
           }
if(m==i)
    {big=count;}
else if(m>i){
    a=count;
    if(a>big)
        big=a;
}
}
printf(" %lld\n",big);
}
return 0;
}
