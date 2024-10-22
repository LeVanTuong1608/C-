#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--){
		int n,h=0,dem=0;
		cin>>n;
		int ar[1000];
		for (int i=2;i<=sqrt(n);i++){
			if (n%i==0){
				h++;
				n/=i;
				if (n%i==0) {
					dem++;
					break;
				}
			}
		}
		if (n>1) h++;
		if (h==3&&dem==0) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
}
