#include <iostream>
#include <math.h>
using namespace std;
int nguyento(int n){
	if (n<2) return 0;
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
	}
	return 1;
}
void check(int n){
	for (int i=0;i<=n;i++){
		if (nguyento(i)==1 &&nguyento(n-i)==1){
			cout <<i<<" "<<n-i;
			break;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while (t--){
		int n;
		cin>>n;
		check(n);
		cout<<endl;
	}
}
