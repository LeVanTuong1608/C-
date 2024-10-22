#include <iostream>
#include <bits/stdc++.h>

using namespace std;
long long GCD(long long a, long long b){
	if (a==b) return a;
	while (b!=0){
		long long tmp=b;
		b=a%b;
		a=tmp;
	}
	return a;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		long long c;
		if (a>=b){
			c= GCD(a,b);
		}
		else {
			c=GCD(b,a);
		}
		cout<<(a*b)/c<<" "<<c<<endl;
	}
}
