
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;cin>>t;
	while (t--){
		long long n;cin>>n;
		int dem=0;
		for (int i=1;i<=sqrt(n);i++){
			if ( n%i==0 ){
					if (i%2==0) dem++;
					if ((n/i)!=i&& (n/i)%2==0) dem++;
//				i+=2;
			}
//			else i+=1;
		}
//		if ((n/2)*2==n) dem++;
//		if (n%2==0) dem++;
		cout<<dem<<endl;
	}
}
