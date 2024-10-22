#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int l=0;
		int a[n][m],b[m*n];
		for (int i=0;i<n;i++){
			
			for (int j=0;j<m;j++){
				cin>>a[i][j];
				b[l]=a[i][j];
				l++;
			}
		}
		sort(b,b+l);
		for (int i=0;i<l;i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
}