#include <bits/stdc++.h>

using namespace std;
long long check (long long n){
//	if (n<2) return 0;
//	int dem=0;
	for (long long  i=2;i<=sqrt(n);i++){
		if (n%i==0){
			return 0;
//			dem++;
//			if ((n/i)!=i&& n%(n/i)==0) dem++;
		}
	} 
//	if (dem==3) return 1;
	return 1;
}

int main(){
	int t;cin>>t;
	while (t--){
		long long n,m;cin>>n>>m;
		int dem=0;
		for (long long i=n;i<=sqrt(m);i++){
			if (check(i)) dem++;
		}
		cout<<dem<<endl;
	}
}
