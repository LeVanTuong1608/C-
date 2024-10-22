#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;cin>>t;
	while (t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		for (int i=0;i<n-1;i++){
			for (int j=i;j<n;j++){
				if (a[i]>a[j]){
					int tmp=a[i];
					a[i]=a[j];
					a[j]=tmp;
				}
			}
		}
		int dem=0;
		for (int i=n-1;i>=0;i--){
			if (dem<k){
				cout<<a[i]<<" ";
				dem++;
			}
		}
		cout<<endl;
	}
}
