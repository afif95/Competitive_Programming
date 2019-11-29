
#include<iostream>
#include<cstdio>
using namespace std;
 
int main()
{
    int n;
    while((scanf("%d",&n))==1)
    {
        if(n==1)
        {
            cin>>n;
            if(n==0){
                cout<<1<<endl;continue;}
            else {cout<<-1<<endl;continue;}
        }
long long int a[n][n],i,j,p,q,sum1=0,sum2=0,row_sum=0,col_sum=0;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                {cin>>a[i][j];
                    if(a[i][j]==0)
                    {
                        p=i;q=j;
                    }}
        for(i=0;i<n;i++)
            sum1+=a[p][i];
        if(p==(n-1)){
        for(i=0;i<n;i++)
            sum2+=a[p-1][i];
        }
        else if(p==0){
        for(i=0;i<n;i++)
            sum2+=a[p+1][i];
        }
        else{
        for(i=0;i<n;i++)
            sum2+=a[p+1][i];
        }
        if(sum1>=sum2)
            cout<<-1<<endl;
        else if(sum1<sum2)
        {
            a[p][q]=sum2-sum1;
            sum1=sum2=0;
            for(i=0;i<n;i++){ /*row checking*/
                for(j=0;j<n;j++)
                {
                    if(!i)
                        sum1+=a[i][j];
                    else
                        sum2+=a[i][j];
                }
                if(i)
                {
                    if(sum1==sum2)
                        {sum1=sum2;sum2=0;}
                    else
                    {
                        cout<<-1<<endl;sum1=sum2=0;
                        break;
                    }
                }
            }
            if(sum1) /*column checking*/
            {
                row_sum=sum1;
                sum1=sum2=0;
                for(i=0;i<n;i++){
                for(j=0;j<n;j++)
                {
                    if(!i)
                        sum1+=a[j][i];
                    else
                        sum2+=a[j][i];
                }
                if(i)
                {
                    if(sum1==sum2)
                        {sum1=sum2;sum2=0;}
                    else
                    {
                        cout<<-1<<endl;sum1=sum2=0;
                        break;
                    }
                }
            }
            }
            if(sum1)
            {
                col_sum=sum1;
                sum1=sum2=0;
                for(i=0;i<n;i++)
                {
                    for(j=0;j<n;j++)
                    {
                        if(i==j)
                            sum1+=a[i][j];
                        if(j==(n-i-1))
                            sum2+=a[i][j];
                    }
                }
            if(sum1==sum2 && row_sum==col_sum && sum1==row_sum)
                cout<<a[p][q]<<endl;
            else
                cout<<-1<<endl;
            }
        }
}
}
