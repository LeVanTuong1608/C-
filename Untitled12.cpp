#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n=0,i,m=1;
		cin>>i;
		for (long long j=0;;j++){
			long long tmp=m;
			m=m+n;
			n=tmp;
			if (m>=i){
				break;
			}
		}
		if (m==i) cout<<"YES";
		else cout<<"NO";
		if (t>0) cout<<endl;
	}
}
