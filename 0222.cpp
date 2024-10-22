#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n][n];
		int cmp=0;
		int b[100005]={0};
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				cin>>a[i][j];
				b[a[i][j]]++;
			}
		}
//		for (int i=0;i<n;i++){
//			for (int j=0;j<n;j++){
//				int cm=a[i][j];
//				b[cm]++;
//			}
//		}
		for (int i=0;i<100005;i++){
			if(b[i]>=n){
				int t=0;
				for (int j=0;j<n;j++){
					int l=0;
					for (int k=0;k<n;k++)
					{
						if (i==a[j][k]){
							l++;
						}
	//				else{
	//					t++;
	//					break;
					}
					if (l!=0){
						t++;
					}
					else {
						t=0,l=0;
						break;
					}
				}
				if (t==n) cmp++; 
			}
	
		}
			cout<<cmp<<endl;
	}
}
