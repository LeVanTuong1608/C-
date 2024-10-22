#include <bits/stdc++.h>

using namespace std;
//long long ucln(long long a,long long b){
//	long long tmp;
//	}


class PhanSo{
	public:
		long long tu,mau;
		PhanSo(long long a,long long b){
			tu=a;
			mau=b;
			
		}
		void rutgon(){
//			long long k= ucln(tu,mau);
					long long k,tmp;
			long long		a=tu,b=mau;
			if(a>b){
				while(b!=0){
					tmp=a;
					a=a%b;
					b=a;
				}
				k=a;
				
			}
			else {
				while(a!=0){
					tmp=b;
					b=b%a;
					a=tmp;
				}
				k=b;
			}
			
			tu/=k;
			mau/=k;
		}
		friend istream &operator>>(istream &input,PhanSo &a){
			input>>a.tu>>a.mau;
			return input;
		}
		friend ostream &operator<<(ostream &output,PhanSo &a){
			output<<a.tu<<"/"<<a.mau;
			return output;
		}
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
