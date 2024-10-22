#include<iostream>
#include<cstring>
#include<bits/stdc++.h>


using namespace std;

int check(long long n){
	int a[1005];
	int m = size n;
	for (int i=0;i<m;i++){
		a[i]=n%10;
		n/=10;
	}
	int r=0, l=m-1;
	while (r<=l){
		if (a[r]!=a[l]){
			return 0;
		}
	}
	return 1 ;
}
int main()
{
	int t;
	cin>>t;
	while (t--){
		if (check(n)==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
	}
}
