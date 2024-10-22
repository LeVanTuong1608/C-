#include <bits/stdc++.h>

using namespace std;

struct PhanSo{
	long long a,b;
};

void nhap(PhanSo &x){
	cin>>x.a>>x.b;
}
void in(PhanSo a){
	cout<<a.a<<"/"<<a.b;
}
long long rutgon(long long a,long long b){
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

struct PhanSo tong(PhanSo a,PhanSo b){
	PhanSo t;
	t.a= (a.a*b.b+b.a*a.b);
	t.b=a.b*b.b;
	long long s=rutgon(t.a,t.b);
	t.a=t.a/s;
	t.b=t.b/s;
	return t;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
