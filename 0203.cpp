#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;cin>>t;
	while (t--){
		int n;cin>>n;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
			
		}
		int i=1;
		int dem=0;
		while (dem==0){
			int cnt=0;
			for (int j=0;j<n;j++){
				if (a[j]==i){
					cnt++;
				}
			}
			if (cnt==0){
				cout<<i<<endl;
				dem++;
				break;
			}
			else i++;
		}
	}
}
