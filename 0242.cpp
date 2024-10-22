#include <bits/stdc++.h>

using namespace std;


int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n],b[n];
		for (int i=0;i<n;i++) cin>>a[i];
		for (int i=0;i<n;i++) cin>>b[i];
		int max=0;
		for (int i=0;i<n;i++){
			
			int s=0,k=1;
			s+=a[i];
			s+=b[i];
			while(s<=2){
				for (int j=n-1;j>i;j--){
					s+=a[j];
					s+=b[j];
					k++;
				}
			}
			if (k>max) max=k;
			
		}
		cout<<max<<endl;
	}
}