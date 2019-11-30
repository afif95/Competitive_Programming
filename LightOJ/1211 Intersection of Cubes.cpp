#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int t,n;
    scanf("%d",&t);
    int x,y,z,x1,y1,z1,max1,max2,max3,min1,min2,min3,res;
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(int j=1;j<=n;j++)
        {
            scanf("%d%d%d%d%d%d",&x,&y,&z,&x1,&y1,&z1);
            if(j==1)
            {
                max1=x;
                max2=y;
                max3=z;
                min1=x1;
                min2=y1;
                min3=z1;
                continue;
            }
            if(x>max1)
                max1=x;
            if(y>max2)
                max2=y;
            if(z>max3)
                max3=z;
            if(x1<min1)
                min1=x1;
            if(y1<min2)
                min2=y1;
            if(z1<min3)
                min3=z1;
        }
        if(max1>=min1 || max2>=min2 || max3>=min3)
            printf("Case %d: %d\n",i,0);
        else{
        res=abs((max1-min1)*(max2-min2)*(max3-min3));
        printf("Case %d: %d\n",i,res);}
    }
    return 0;
}
