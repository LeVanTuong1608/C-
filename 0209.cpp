#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;cin>>t;
	while (t--){
		int n,k;cin>>n>>k;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		while (k--){
			int m,l;cin>>m>>l;
			int tong=0;
			for (int j=m-1;j<l;j++){
				tong +=a[j];
				
			}
			cout<<tong<<endl;
		}
	}
}
