#include<stdio.h>
int main()
{
int h,m,t=1,test;

scanf("%d",&test);

while(t!=test+1){

scanf("%d:%d",&h,&m);

if(h<=12 && m<=60){

if(h==12 || h==6)
{
    if(m==0){
    h=h;}
    else if(m>0){
        h=h-1;
        if(h==0){h=12;}
        m=60-m;
    }
}
else if(h<6){

    h=12-h;
    if(m==0){
    h=h;}
    else if(m>0){
        h=h-1;
        if(h==0){h=12;}
        m=60-m;
    }
}
else if(h>6){

    h=12-h;
    if(m==0){
    h=h;}
    else if(m>0){
        h=h-1;
        if(h==0){h=12;}
        m=60-m;
    }
}

printf("%02d:%02d\n",h,m);
}
t++;
}
return 0;
}
