#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;cin>>t;
	while (t--){
		int n,m;cin>>n>>m;
		int a[n][m],b[n][m];
	
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				b[i][j]=a[i][j];
			}
		}
		for(int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				if (a[i][j]==1){
					int h=0,k=0;
					
					while (h<n){
						b[h][j]=1;
						h++;
					}
					while (k<m){
						b[i][k]=1;
						k++;
					}
				}
			}
		}
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				cout<<b[i][j];
				cout<<" ";
			}
			cout<<endl;
		}
	}
}
