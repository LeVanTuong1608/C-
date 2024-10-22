#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		long long a=0,b=1;
		for (int i=2;i<=n;i++){
			long long tmp=b;
			b=a+b;
			a=tmp;	
		
		}
		cout<<b<<endl;
	}
}
