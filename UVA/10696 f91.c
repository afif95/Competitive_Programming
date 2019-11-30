#include<stdio.h>
int main()
{
long int n,m;
while(scanf("%ld",&n)==1&&n!=0){
if(n<=100){
        m=91;
}
else{
        m=n-10;
}
printf("f91(%ld) = %ld\n",n,m);
}
return 0;
}
