#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(long long n){
	if(n<2)	return 0;
	else{
		for(long long i=2;i<=sqrt(n);i++){
			if(n%i==0) return 0;
		}
		return 1;
	}
}
int main(){
	int t; cin>>t;

	while(t--){
		long long n;cin>>n;
		int count=0;
		for(long long i=2;i<=sqrt(n);){
			if(isPrime(i))	count++;
			
			if(i%2==1)	i+=2;
			else if(i%2==0)	i++;
		}
		cout<<count<<endl;
	}
}
