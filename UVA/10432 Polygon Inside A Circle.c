#include<stdio.h>
#include<math.h>
#define N 3.1415926535897932384626433832795
int main()
{
double r,n,d;
while(scanf("%lf %lf",&r,&n)!=EOF)
{
d=r*r*n/2*(sin(2.0*N/n));
printf("%.3lf\n",d);
}
return 0;
}
