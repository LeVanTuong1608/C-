#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--){
		int n;
		int dem=0;
		cin>>n;
		for (int i=1;i<=n/2;i++){
			if (n%i==0){
				dem+=i;
				while (n%i==0){
					n/=i;
				}
			}
		}
		if (n>1) dem+=n;
		cout<<dem<<endl;
	}
}
