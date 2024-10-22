	#include <bits/stdc++.h>

using namespace std;

int check(int n){
		int dem=0;
//		cin>>n;
		int m=n;
		for (int i=2;i<=m/2;i++){
			if (n%i==0){
				dem++;
			
			}
		}
		if (n>1) dem++;
		if (dem==1) return 1;
		else return 0;
}

int main(){
	int t;
	cin>>t;
	while (t--){
		int n,dem=0;
		cin>>n;
		for (int i=1;i<=n;i++){
			if (check(i)==1) dem++;
		}
		cout<<dem<<endl;
	
	}
}
