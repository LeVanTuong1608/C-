#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int check(long n){
	if (n<=9){
		return n;
	}
	else{
		long s=0;
		while(n>0){
			s=s+n%10;
			n/=10;
		}
	return check(s);
	}
}
int main(){
	
	int t;
	cin>>t;
	while (t--){
		long n;
		cin>>n;
		long c= check(n);
		cout<<c<<endl;
	}
}
