#include <bits/stdc++.h>

using namespace std;
const int MAX=1e6;
int b[MAX];

int main(){

	int n;cin>>n;
	int a[n];
//	int b[105]={0};
	for (int i=0;i<MAX;i++){
		b[i]=0;
	}
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
//		for (int j=0;j<n-1;j++){
//			if (a[j]>a[j+1]){
//				int tmp=a[j];
//				a[j]=a[j+1];
//				a[j+1]=tmp;
//			}
//		}
	for (int i=0;i<n-1;i++){
		for (int j=i;j<n;j++){
			if (a[i]>a[j]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
////	for (int i=0;i<n;i++){
////		cout<<a[i]<<" ";
////	}
////	cout<<endl;
//	for (int i=0;i<n-1;i++){
//		if (a[i]!=a[i+1]&&a[i-1]!=a[i]){
//			cout<<a[i]<<" ";
//		}
//	}
////	int t;
	for (int i=0;i<n;i++){
		b[a[i]]++;
	}
	for (int i=0;i<MAX;i++){
		if (b[i]>0) cout<<a[i]<<" ";
	}
//	for (int i=0;i<n;i++){
//		int l=0;
//		for (int j=0;j<n;j++){
//			if (a[i]==a[j]) l++;
//		}
//		if(l==1) cout<<a[i]<<" ";
//	}
}
