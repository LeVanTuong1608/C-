#include <bits/stdc++.h>


using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n];
		int dem=0;
		for (int i=0;i<n-1;i++){
			for (int j=i+1;j<n;j++){
				if (abs(a[i]-a[j])==m||a[i]-a[j]==m||a[j]-a[i]==m){
					dem++;
					break;
				}
			}	
		}
		if (dem>0) cout<<1<<endl;
		else cout<<-1<<endl;
	}
}
