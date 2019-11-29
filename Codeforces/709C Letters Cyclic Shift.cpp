#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i;
    int k=s.size();
    if(s[0]=='a')
    {
        i=0;
        while(s[i]=='a')
            i++;
        if(i==k)
            s[i-1]='z';
        else if(i!=k && s[i]!='a')
        {
            while(s[i]!='\0'){
                if(s[i]!='a')s[i]=s[i]-1;
                else break;
                i++;
            }
        }
    }
    else if(s[0]!='a')
    {
        i=0;
        if(k==1){
            s[0]='z';
        }
        else
        {
            while(s[i]!='a' && s[i]!='\0')
            {
                s[i]=s[i]-1;
                i++;
            }
        }
    }
    cout<<s<<endl;
}
