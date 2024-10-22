#include <bits/stdc++.h>

using namespace std;

int nguyento(int n){
	if(n<2) return 0;
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
	}
	return 1;
}

int check(int n,int m){
	if(nguyento(n)==1&& nguyento(m)==1){
		return 1;
	}
	else return 0;
}

int main(){
	int t;cin>>t;
	while(t--){
		int n,dem=0;
		cin>>n;
		for (int i=1;i<=n/2;i++){
			if( check(i,n-i)==1){
				cout<<i<<" "<<n-i<<endl;
				dem++;
				break;
			}
		}
		if (dem==0) cout<<-1<<endl;
	}
}
