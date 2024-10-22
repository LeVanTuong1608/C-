#include <bits/stdc++.h>

using namespace std;

int check(long long n,int m){
	int tmp;
	if(m<n){
		while (m>0){
			tmp=m;
			m=n%m;
			n=tmp;
		}
		return n;
	}
	else {
		while (n>0){
			tmp=n;
			n=m%n;
			m=tmp;
		}
		return m;
	}
}

int main(){
	
	int t;cin>>t;
	while (t--){
		int n;
		long long uoc=1;
		cin>>n;
		for (int i=1;i<=n;i++){
			uoc = (uoc*i)/check(uoc,i);
		}
		cout<<uoc<<endl;
	}
}
