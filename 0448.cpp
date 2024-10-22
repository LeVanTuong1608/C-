#include <bits/stdc++.h>

using namespace std;

const int MAX=1000009;
int cnt[MAX];

int main(){
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		for (int i=0;i<MAX;i++){
			cnt[i]=0;
		}
		for (int i=0;i<n;i++){
			cnt[a[i]]++;
			
		}int dem=0;
		for (int i=0;i<n;i++){
			if (a[i]==k){
					cout<<cnt[a[i]]<<endl;
					dem++;
					break;
//				else{
//					cout<<-1<<endl;
//					break;
//				}
				
			}
			
		}
		if (dem==0) cout<<"-1"<<endl;
		
		
	}
}
