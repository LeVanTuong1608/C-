#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int t;cin>>t;
	while(t--){
		long long n,m;
		cin>>n>>m;
		long long k=0;
		for (int i=1;i<=n;i++){
			k+=i%m;
		}
		cout<<k<<endl;
	}
}
