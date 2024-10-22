#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ar[n][n];
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				cin>>ar[i][j];
			}
		}
		for (int i=0;i<n;i++){
			if (i%2==0){
				for (int j=0;j<n;j++){
					cout<<ar[i][j]<<" ";
				}
			}
			else{
				for (int j=n-1;j>=0;j--){
					cout<<ar[i][j]<<" ";
				}
			}
		}
		cout<<endl;
	}
}
