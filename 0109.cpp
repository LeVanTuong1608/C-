#include <iostream>
#include <math.h>

using namespace std;

int checkchanle(int n){
	int dem=0,tong=0;
	while (n){
		if ((n%10)%2==0) tong++;
		else dem++;
		n/=10;
	}
	if (dem==tong){
		return 1;
	}
	return 0;
}
int main(){
	int t,dem=0;
	cin>>t;
	if (t%2==1) return 0;
	for (int i=pow(10,t-1);i<pow(10,t);i++){
		if (checkchanle(i)==1) {
			cout<<i<<" ";
			dem++;
		}
		if (dem==10){
			dem=0;
			cout<<endl;
		}
	}
}
