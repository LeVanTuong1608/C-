#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,i;
		cin>>n;
		i=sqrt(n);
		if (i*i==n) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
