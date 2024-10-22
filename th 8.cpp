#include <bits/stdc++.h>

using namespace std;
long long check(long n,long m){
	long long tmp;
	if(n>m){
		while (m>0){
			tmp=m;
			m=n%m;
			n=tmp;
		}
		return n;
	}
	else{
			while (n>0){
				tmp=n;
				n=m%n;
				m=tmp;
			}
			return m;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long  a,x,y;
		cin>>a>>x>>y;
		long long p=0,q=0;
		for (int i=0;i<x;i++){
			p=p*10+a;
		}
		for (int i=0;i<y;i++){
			q=q*10+a;
		}
		cout<<check(p,q)<<endl;
	}
}
