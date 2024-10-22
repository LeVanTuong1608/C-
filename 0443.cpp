#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;cin>>t;
	while (t--){
		int n;
		cin>>n;
		int a[n-1];
		for (int i=0;i<n-1;i++){
			cin>>a[i];
		}
////			for (int i=0;i<n-2;i++){
////			for (int j=i;j<n-1;j++){
////				if(a[i]>a[j]){
////					int tmp=a[i];
////					a[i]=a[j];
////					a[j]=tmp;
////				}
////			}
////		}
		int k=0;
		for (int i=0;i<n-2;i++){
			if (a[i+1]-1!=a[i]){
				k=a[i]+1;
				break;
			}
		}
		if (k==0) cout<<a[n-1]+1<<endl;
		else cout<<k<<endl;
	}
	
}
