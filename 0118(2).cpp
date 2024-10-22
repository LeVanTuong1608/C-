#include <bits/stdc++.h>

using namespace std;

int check(int n){
	int dem=0;
	int s[1006];
	int m=n;
	if (n<2) return 0;
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0 ){
			s[dem++]=i;
			while (n%i==0) n/=i;
		}
	}
	if (n>1) s[dem++]=n;
	int tich=1;
	for (int i=0;i<dem;i++){
		tich =tich * s[i];
	}
	
	if (dem==3 && m==tich) return 1;
	return 0;
}

int main(){
	int t;cin>>t;
	while (t--){
		int n;cin>>n;
		if (check(n)==1) cout<<1<<endl;
		
		else cout<<0<<endl;
	}
}
