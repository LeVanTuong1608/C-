#include<bits/stdc++.h>

using namespace std;

class thoigian{
	private:
		int gio;
		int phut;
	public:
		thoigian() {
			gio = phut = 0;
		}
		thoigian(int gio,int phut) {
			this->gio = gio;
			this->phut = phut;
		}
		void nhapbp();
		void rutgon(thoigian& a);
		void xemmh();
		friend bool operator < (thoigian a,thoigian b);
		friend thoigian operator + (thoigian a,thoigian b);
		friend thoigian operator - (thoigian a,thoigian b);
		friend thoigian operator * (thoigian a,thoigian b);
		friend thoigian operator / (thoigian a,int b);
};

void thoigian :: nhapbp() {
	cin >> gio;
	cin >> phut;
}

void thoigian :: rutgon(thoigian& a) {
	if(a.phut >= 60) {
		a.gio = a.gio + a.phut/60;
		a.phut = a.phut - (a.phut/60)*60;
	}
}

void thoigian :: xemmh() {
	cout << gio << ":" << phut << endl;
}

bool operator < (thoigian a,thoigian b) {
	return a.gio * 60 + a.phut < b.gio * 60 + b.phut;
}

thoigian operator + (thoigian a,thoigian b) {
	thoigian tmp;
	tmp.gio = a.gio + b.gio;
	tmp.phut = a.phut + b.phut;
	return tmp;
}

thoigian operator - (thoigian a,thoigian b) {
	thoigian tmp1;
	tmp1.gio = abs(a.gio - b.gio);
	tmp1.phut = abs(a.phut - b.phut);
	return tmp1;
}

thoigian operator * (thoigian a,thoigian b) {
	thoigian tmp;
	tmp.phut = (a.gio*60 +a.phut) +(b.gio* 60 + b.phut);
	tmp.gio = tmp.phut/60;
	tmp.phut = tmp.phut-tmp.phut/60 * 60;
	return tmp;
}

thoigian operator / (thoigian a,int b) {
	thoigian tmp;
	tmp.phut = (a.gio*60 +a.phut) / b;
	tmp.gio = tmp.phut/60;
	tmp.phut = tmp.phut-tmp.phut/60 * 60;
	return tmp;
}








int main() {
	thoigian a,b(3,20),c;
	a.nhapbp();
	a.rutgon(a);
	c.nhapbp();
	thoigian d = a+ c;
	d.rutgon(d);
	d.xemmh();
	a.xemmh();
						
}
