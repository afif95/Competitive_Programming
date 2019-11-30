#include<stdio.h>
int main()
{
int a,b,i,t=1,temp,test,sum=0;

scanf("%d",&test);

while(t!=test+1){

    scanf("%d%d",&a,&b);
if(a>b){
    temp=a;
    a=b;
    b=temp;
}
for(i=a;i<=b;i++){

    if(i&1){

        sum+=i;
    }
}
printf("Case %d: %d\n",t,sum);
t++;sum=0;
}
return 0;
}
