#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n][m];
//		int x=n*m+4;
		int b[100006];
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		int c1,c2,h1,h2,k=0;
		c1=0,h1=0,c2=m-1,h2=n-1;
		while(c1<<=c2&&h1<=h2){
			for (int i=c1;i<=c2;i++){
				b[k]=a[h1][i];
				k++;
			}
			h1++;
			for (int i=h1;i<=h2;i++){
				b[k]=a[i][c2];
				k++;
			}
			c2--;
			if(h1<=h2){
				for (int i=c2;i>=c1;i--){
					b[k]=a[h2][i];
					k++;
				}
				h2--;
			}
			if(c1<=c2){
				for (int i=h2;i>=h1;i--){
					b[k]=a[i][c1];
					k++;
				}
				c1++;
			}
		}
		for (int i=k-1;i>=0;i--){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
}