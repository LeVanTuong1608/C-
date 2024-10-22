
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a=0,b=1;
		while (b<n){
			long long tmp=b;
			b=a+b;
			a=tmp;
		}
//		cout<<b<<endl;
		if (b==n) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
	}
}
