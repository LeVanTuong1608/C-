#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int dem=0;
		for (int i=2; i<=1e6; i++)
		{
			int kt=1;
			for (int j=2; j<=sqrt(i); j++){
				if (i % j == 0) {kt =0; break; } 
////				if (i%(i/2)==0) kt=0;
	}
	
		if (i*i >=n && i*i <=m && kt) {
		dem++; 
//		cout << i<<" "; 
	
		}
	}
		cout << dem << endl;
	}
}
