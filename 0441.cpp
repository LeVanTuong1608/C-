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
		int dem=0;
		for (int i=0;i<n;i++){
			if (a[i]==k){
				dem++;
				cout<<i+1<<endl;
				break;
			}
		}
		if (dem==0) cout<<-1<<endl;
	}
}
