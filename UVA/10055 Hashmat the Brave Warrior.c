#include<stdio.h>
int main()
{
long int i,j,k,l;
while(scanf("%ld%ld",&i,&j)==2){
if(i<j){
k=i;
i=j;
j=k;
}
l=i-j;
printf("%ld\n",l);
}
return 0;
}
