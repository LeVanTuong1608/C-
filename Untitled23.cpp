#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,a,b,dem=0;
		cin>>n>>m>>a>>b;
		if (m<n){
			for (int i=m;i<=n;i++){
			if (i%a==0||i%b==0){
				dem++;
			}
		}
		}
		else {
				for (int i=n;i<=m;i++){
			if (i%a==0||i%b==0){
				dem++;
			}
		}
		}
		cout<<dem<<endl;
	}
}

