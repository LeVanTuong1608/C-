
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	for (int l=1;l<=t;l++){
		int n,m;
		cin>>n>>m;
		int a[n][m];
		int b[m][n];
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		for (int i=0;i<m;i++){
			for (int j=0;j<n;j++){
				b[i][j]=a[j][i];
			}
		}
		int c[n][n];
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				c[i][j]=0;
				int k=m;
				while(k--){
					c[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		cout<<"Test "<<l<<":"<<endl;
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				cout<<c[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
