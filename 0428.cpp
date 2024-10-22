#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;cin>>t;
	while (t--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m],c[n+m];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		for (int i=0;i<m;i++){
			cin>>b[i];
		}
		int y=0;
		for (int i=0;i<n;i++){
			c[y]=a[i];
			y++;
		}
		for (int i=0;i<m;i++){
			c[y]=b[i];
			y++;		
	}
//	y=y+1;
	sort( c ,c+y);
	for (int i=0;i<n+m;i++){
		cout<<c[i]<<" ";
	}
	cout<<endl;
}
}
