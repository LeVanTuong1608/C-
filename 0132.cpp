#include <iostream>
#include <math.h>
using namespace std;
int check(long long n){
	if (n<2) return 0;
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,c=1;
		cin>>n;
		long long m=n;
		for (int i=2;i<=sqrt(m);i++){
			if (n%i==0&&check(i)==1){
				if(c<i){
					c=i;
				}
				while (n%i==0){
					n/=i;
				}
			}
		}
		if (n>c) c=n;
		cout<<c<<endl;
		
	}
}
