
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main(){
	int t;cin>>t;
	while (t--){
		int n,k;cin>>n>>k;
		int	a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		int min= a[0];
		for (int i=0;i<n-1;i++){
				for (int j=i;j<n;j++){
					if (a[j]<a[i]){
						int tmp=a[i];
						a[i]=a[j];
						a[j]=tmp;
					}
				}
		}
		
		cout<<a[k-1]<<endl;
	}
}
