
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int check(long long n){
	long long tong=0;
	for (int i=1;i<=sqrt(n);i++){
		if (n%i==0) tong+=i;
	}
	if (n%(n/2)==0) tong+=n/2;
	return tong;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if (check(n)==n) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
}
