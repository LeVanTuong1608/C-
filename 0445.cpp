#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;cin>>t;
	while (t--){
		int n;
		cin>>n;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		int dem=0;
		for (int i=0;i<n-1;i++){
			for (int j=i;j<n;j++){
				if(a[i]>a[j]){
					int tmp=a[i];
					a[i]=a[j];
					a[j]=tmp;
				}
			}
		}
		int k=0;
		for (int i=0;i<n;i++){
			if (a[0]!=a[i]){
				dem++;
				k=a[i];
				break;
			}
		}
		if (dem!=0) cout<<a[0]<<" "<<k<<endl;
		else cout<<-1<<endl;
	}
}
