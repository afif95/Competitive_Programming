#include<bits/stdc++.h>
using namespace std;
 
int main(){
        int n;
        cin>>n;
        if(n%2==0) {
			cout<<n*(int)n/2<<endl;
		}
		else {
			int k=(int)n/2;
			int l=n-k;
			cout<<k*k+l*l<<endl;
		}
		int m=0;
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				if(j%2==m) {
					cout<<"C";
				}
				else
					cout<<".";
			}
			m = (m==1) ? 0 : 1;
			cout<<endl;
		}
 
    return 0;
}
