#include <bits/stdc++.h>

using namespace std;
long long check(long long n ,long long m){
	if (n==m) return n;
	if (n<m){
		long long k=m, d=n;
		while (n!=0){
			long long tmp=n;
			n=m%n;
			m=tmp;
		}
		return (k*d/m);
	}
	else {
		long long k=m, d=n;
			while (m!=0){
			long long tmp=m;
			m=n%m;
			n=tmp;
		}
			return (k*d/n);
	}
}

int main(){
	int t;cin>>t;
	while (t--){
		long long a,b,c,n;cin>>a>>b>>c>>n;
//		long long 	l=check(a,b);
//		l=check(l,c);
//		int dem=0;
//		for(long long i=pow(10,n-1);i<pow(10,n);i++){
//			if (i%l==0) {
//				dem++;
//				cout<<i<<endl;
//				break;
//			}
//		}
//		if (dem==0 ) cout<<-1<<endl;

		long long t=check(a,b);
		long long h=check(t,c);
		
//			if (h>=pow(10,n-1)&&h<pow(10,n)) 
		cout<<h<<endl;
//		else cout<<-1<<endl;
	}
}
