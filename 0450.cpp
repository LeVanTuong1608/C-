#include <bits/stdc++.h>

using namespace std;
const int MAX=1e6;
	int cnt[MAX];

int main(){
	int t;cin>>t;
	while (t--){
		int n,dem=0;cin>>n;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		
		}
		for (int i=0;i<MAX;i++){
			cnt[i]=0;
		}
		for (int i=0;i<n;i++){
			cnt[a[i]]++;
			if (cnt[a[i]]==2){
				cout<<a[i]<<endl;
				dem++;
				break;
			}
		}
		if (dem==0) cout<<-1<<endl;
	}
}
