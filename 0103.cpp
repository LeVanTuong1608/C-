#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	double s=0;
//	if (n<1){
//		cout<<s;
//		return 0;
//	}
	for (int i=1;i<=n;i++){
		s+= double(1.0/i);
	}
	printf("%.4lf",s);
//	cout<< setprecision(4)<<fixed<<s;
}
