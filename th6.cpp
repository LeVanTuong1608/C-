#include <iostream>
#include <math.h>

using namespace std;
int check(int n){
	int dem=0;
	if(n<1) return 0;
	int i=sqrt(n);
	if (i*i==n) return 1;
	return 0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int dem=0;
		for (int i=3;i<=n;i++){
			if (check(i)==1){
//				cout<<sqrt(i)<<endl;
				dem++;
			}
		}
		cout<<dem<<endl;
	}
}
