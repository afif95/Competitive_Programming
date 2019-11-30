#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
long long s[9];
while((scanf("%I64d",&s[0]))!=EOF){
for(int i=1;i<9;i++)
    cin>>s[i];
long long sum1,sum2,sum3,sum4,sum5,sum6,min;
sum1=s[3]+s[6]+s[2]+s[8]+s[1]+s[4];
sum2=s[3]+s[6]+s[1]+s[7]+s[2]+s[5];
sum3=s[5]+s[8]+s[0]+s[6]+s[1]+s[4];
sum4=s[5]+s[8]+s[1]+s[7]+s[0]+s[3];
sum5=s[4]+s[7]+s[0]+s[6]+s[2]+s[5];
sum6=s[4]+s[7]+s[2]+s[8]+s[0]+s[3];
    min=sum1;
    int m=1;
    if(sum2<min)
        {min=sum2;m=2;}
    if(sum3<min)
        {min=sum3;m=3;}
    if(sum4<min)
        {min=sum4;m=4;}
    if(sum5<min)
        {min=sum5;m=5;}
    if(sum6<min)
        {min=sum6;m=6;}
if(m==1)
    cout<<"BCG ";
if(m==2)
    cout<<"BGC ";
if(m==3)
    cout<<"CBG ";
if(m==4)
    cout<<"CGB ";
if(m==5)
    cout<<"GBC ";
if(m==6)
    cout<<"GCB ";
cout<<min<<endl;}
return 0;
}
