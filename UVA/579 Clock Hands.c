#include<stdio.h>
int main()
{
int h,m;
double g,d=5.5;
while(scanf("%d:%02d",&h,&m)==2)
{
    if(h==0 && m==00)
        break;
g=d*m-30*h;
if(g<0)
    g=(-1)*g;
if(g>180)
    g=360-g;
printf("%.3lf\n",g);
}
return 0;
}
