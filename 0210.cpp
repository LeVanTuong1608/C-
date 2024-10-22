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
		int min=-99;
		for (int i=0;i<n-1;i++){
			for (int j=i+1;j<n;j++){
				if (a[i]<a[j]){
					if (a[j]-a[i]>min){
						min=a[j]-a[i];
					}
				}
			}
		}
		if (min==-99) cout<<-1<<endl;
		else cout<<min<<endl;
	}
}
