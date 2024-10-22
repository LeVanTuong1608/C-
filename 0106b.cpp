#include <iostream>

using namespace std;

long long check(long long n){
	long long m=n;
	long long t=0;
	while(n){
		t=t*10+n%10;
		n/=10;	
	}
	if (t==m) return 1;
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if (check(n)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
