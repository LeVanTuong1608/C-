#include <bits/stdc++.h>

using namespace std;
int tamgiac(int n,int m,int k){
	if (n*n+m*m==k*k) return 1;
	if (n*n+k*k==m*m) return 1;
	if (k*k+m*m==n*n) return 1;
	return 0;
}

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		int k=0,m=0;
		for (int i=0;i<n-2;i++){
			
			for (int j=i+1;j<n-1;j++){
				
				for (int k=0;k<n;k++){
					if (tamgiac(a[i],a[j],a[k])==1){
						m++;
						break;
					}
				}
				if (m>0) break;
			}
			if (m>0) break;
		}
		if (m>0 ) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
