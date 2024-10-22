
#include<bits/stdc++.h>

using namespace std;
struct PhanSo{
	long long tu,mau;
};
long long ucln(long long a,long long b){
	long long tmp;
	if (a>b){
		while(b!=0){
			tmp=b;
			b=a%b;
			a=tmp;
		}
		tmp=a;
	}
	else {
		while(a!=0){
			tmp=a;
			a=b%a;
			b=tmp;
		}
		tmp=b;
	}
	return tmp;
}

struct PhanSo rutgon(PhanSo &a){
	long long k=ucln(a.tu,a.mau);
	a.tu=a.tu/k;
	a.mau=a.mau/k;
	return a;
}
void process(PhanSo a,PhanSo b){
	PhanSo c,d;
	c.tu=(a.tu*b.mau+b.tu*a.mau)*(a.tu*b.mau+b.tu*a.mau);
	c.mau=(a.mau*b.mau)*(a.mau*b.mau);
	d.tu=(a.tu*b.tu*c.tu);
	d.mau=c.mau*a.mau*b.mau;
	rutgon(c);rutgon(d);
	cout<<c.tu<<"/"<<c.mau<<" "<<d.tu<<"/"<<d.mau<<endl;
}


int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
