#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int h=0;
		int a[n][n],b[n*n+5];
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				cin>>a[i][j];
				b[h++]=a[i][j];
			}
		}
		sort(b,b+h);
		cout<<b[m-1]<<endl;

	}
}
