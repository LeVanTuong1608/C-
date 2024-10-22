#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[100005];
		int h=0;
		for (int i=2;i<=sqrt(n);i++){
			if (n%i==0){
				while(n%i==0){
					a[h++]=i;
					n/=i;
				}
			}
		}
		if(n>1) a[h++]=n;
		if(k<h+1){
			cout<<a[k-1]<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
}
