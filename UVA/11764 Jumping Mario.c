#include<stdio.h>
int main()
{
int t,n,g,a,c=1,h=0,high=-1,low=0;
scanf("%d",&t);

while(c!=t+1){
scanf("%d",&n);

for(a=1;a<=n;a++){
    g=h;
    scanf("%d",&h);
    if(h>g){
        high++;}
    else if(h<g){
        low++;}
}
printf("Case %d: %d %d\n",c,high,low);
high=-1;low=0;c++;h=0;
}
return 0;}
