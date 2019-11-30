#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
int t,m,n;
//cin>>t;
scanf("%d",&t);
for(int i=1;i<=t;i++)
{
    //cin>>m>>n;
    scanf("%d%d",&m,&n);
    if(m>n)
        swap(m,n);
    if(m==1 || n==1)
    {
        //cout<<"Case "<<i<<": "<<m*n<<endl;
        printf("Case %d: %d\n",i,m*n);
    }
    else if(m==2 || n==2)
    {
        if(n&1){
            //cout<<"Case "<<i<<": "<<n+1<<endl;
            printf("Case %d: %d\n",i,n+1);
        }
        else
        {
            if((n>>1)&1)
            {
                //cout<<"Case "<<i<<": "<<n+2<<endl;
                printf("Case %d: %d\n",i,n+2);
            }
            else
            {
                //cout<<"Case "<<i<<": "<<n<<endl;
                printf("Case %d: %d\n",i,n);
            }
        }
    }
    else
    {
        //cout<<"Case "<<i<<": "<<((m*n+1)>>1)<<endl;
        printf("Case %d: %d\n",i,((m*n+1)>>1));
    }
}
return 0;
}
