#include<bits/stdc++.h>>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==0 || n==1 || n==3 || n==5 || n==7 || n==9 || n>9)
        cout<<0<<endl;
    else
    {
        int count=0;
        if(n==2)
        {
            for(int i=0;i<=9;i++)
                for(int j=0;j<=9;j++)
                {
                    if(i==j)
                        count++;
                }
        }
        else if(n==4)
        {
            for(int i=0;i<=9;i++)
                for(int j=0;j<=9;j++)
                    for(int k=0;k<=9;k++)
                        for(int l=0;l<=9;l++)
                    {
                        if((i+j)==(k+l))
                            count++;
                    }
        }
        else if(n==6)
        {
            for(int i=0;i<=9;i++)
                for(int j=0;j<=9;j++)
                    for(int k=0;k<=9;k++)
                        for(int l=0;l<=9;l++)
                            for(int p=0;p<=9;p++)
                                for(int q=0;q<=9;q++)
                                {
                                if((i+j+k)==(l+p+q))
                                count++;
                                }
        }
        else if(n==8)
        {
            for(int i=0;i<=9;i++)
                for(int j=0;j<=9;j++)
                    for(int k=0;k<=9;k++)
                        for(int l=0;l<=9;l++)
                            for(int p=0;p<=9;p++)
                                for(int q=0;q<=9;q++)
                                    for(int r=0;r<=9;r++)
                                        for(int t=0;t<=9;t++)
                                {
                                if((i+j+k+l)==(p+q+r+t))
                                count++;
                                }
        }
        cout<<count<<endl;
    }
    return 0;
}
