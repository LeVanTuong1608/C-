#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;cin>>t;
	while (t--){
		int n;cin>>n;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		int hieu=0;
		for (int i=0;i<n-1;i++){
			for (int j=i;j<n;j++){
				if (a[j]>=a[i]){
					if (hieu< j-i){
						hieu=j-i;
					}
				}
			}
		}
		cout<<hieu<<endl;
	}
}
