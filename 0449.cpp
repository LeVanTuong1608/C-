#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		int cmp=0;
		sort(a,a+n);
		for (int i = n-1; i >=0; i--) {
			int x = lower_bound(a, a + n, a[i] - m) - a;
			if (a[x] + m == a[i]) {
				cmp = 1;
				break;
			}
		}
		if (cmp>0) cout<<1<<endl;
		else cout<<-1<<endl;
	}
}
