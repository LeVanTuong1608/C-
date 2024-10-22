#include <bits/stdc++.h>

using namespace std;

int check(long long n){
	if (n==1|| n==0) return 1;
	long long a=0,b=1;
	while(b<n){
		long long tmp=b;
		b=a+b;
		a=tmp;
	}
	if (b==n) return 1;
	return 0;
}

int main(){
	int t;cin>>t;
	while (t--){
		long long n;
		cin>>n;
		if (check(n)==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
