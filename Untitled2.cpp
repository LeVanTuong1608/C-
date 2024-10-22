#include <bits/stdc++.h>

using namespace std;

bool cmp(int n,int m){
	if (n!=0&&m!=0) return n<m;
	return 0;
}

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		
		sort(a,a+n);
//		for (int i=0;i<n;i++){
//			if (a[i]=="") a[i]=0;
//		}
		int m=0;
		for (int i=0;i<n;i++){
			if (a[i]!=0) cout<<a[i]<<" ";
			if (a[i]=0) m++;
		}
		for (int j=m;j>=0;j--) cout<<a[j]<<" ";
		cout<<endl;
	}
}