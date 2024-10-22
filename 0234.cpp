#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n,m,y;cin>>n>>m>>y;
		int a[n][m];
		int b[100007],k=0;
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				cin>>a[i][j];
			}
		
		}
		int a1=0,a2=n-1;
		int b1=0,b2=m-1;
		while(b1<=b2&&a1<=a2){
			for (int i=b1;i<=b2;i++){
//				cout<<a[a1][i]<<" ";
				b[k++]=a[a1][i];
			}
			++a1;
			for (int i=a1;i<=a2;i++){
//				cout<<a[i][b2]<<" ";
				b[k++]=a[i][b2];
			}
			--b2;
			if(a1<=a2){
				for (int i=b2;i>=b1;i--){
//					cout<<a[a2][i]<<" ";
					b[k++]=a[a2][i];
				}
				--a2;
			}
			if (b1<=b2){
			
				for (int i=a2;i>=a1;i--) {
//					cout<<a[i][b1]<<" ";
					b[k++]=a[i][b1];
				}
				++b1;
			}
//			cout<<endl;
		}
//		for (int i=k-1;i>=0;i--) cout<<b[i]<<" ";
		cout<<b[y-1]<<endl;
	}
}