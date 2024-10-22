#include <bits/stdc++.h>

using namespace std;
long long ucln(long long x,long  long y){
	long long tmp;
	if (x>y){
		while(x!=0){
			tmp=y;
			y=x%y;
			x=tmp;
		}
		tmp =x;
	}
	else {
		while(x>0){
			tmp=x;
			x=y%x;
			y=tmp;
		}
		tmp = y;
	}
	return tmp;
}
struct PhanSo{
	long long tu,ma;
};

void nhap(PhanSo &x){
	cin>>x.tu>>x.ma;
	
}

void in(PhanSo X){
	cout<<X.tu<<"/"<<X.ma;
}

void rutgon(PhanSo &x){
	long long k= ucln(x.tu,x.ma);
	x.tu= x.tu/k;
	x.ma=x.ma/k;
}


int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
