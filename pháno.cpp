#include <conio.h>
#include <iostream>

using namespace std;

int usc(int a, int b)
{
	int r = a % b;
	while (r)
	{
		a = b;
		b = r;
		r = a % b;
	}

	return b;
}

class phanso
{
	public:
		int tuso, mauso;
	void nhap()
	{
		cout << "Nhap tu so : ";
		cin >> tuso;
		cout << "Nhap mau so : ";
		cin >> mauso;
	}

	void hienphanso()
	{
		cout << tuso << "/" << mauso << "\n";
	}

	void quydong(phanso & b)
	{
		b.tuso = b.tuso * mauso;
		mauso = mauso *b.mauso;
		tuso = tuso *b.mauso;
		b.mauso = mauso;
	}

	phanso operator+(phanso b)
	{
		phanso c;
		c.tuso = tuso + b.tuso;
		c.mauso = mauso;
		return c;
	}

	void rutgon()
	{
		int u = usc(tuso, mauso);
		tuso = tuso / u;
		mauso = mauso / u;
	}
};

class phansomoi: public phanso
{
	public: phansomoi operator+(phansomoi b)
	{
		phansomoi c;
		c.tuso = tuso + b.tuso;
		c.mauso = mauso;
		return c;
	}

	phansomoi operator*(phansomoi b)
	{
		phansomoi c;
		c.tuso = tuso *b.tuso;
		c.mauso = mauso *b.mauso;
		return c;
	}
};

int main()
{
	clrscr();
	phansomoi x, y, kq;
	cout << "Nhap phan so thu nhat :" << endl;
	x.nhap();
	cout << "Nhap phan so thu hai :" << endl;
	y.nhap();
	cout << "Cac phan so da nhap la :" << endl;
	x.hienphanso();
	y.hienphanso();
	x.quydong(y);
	kq = x + y;
	kq.rutgon();
	cout << "Tong 2 phan so da nhap la :" << endl;
	kq.hienphanso();
	kq = x * y;
	kq.rutgon();
	cout << "Tich 2 phan so da nhap la :" << endl;
	kq.hienphanso();
	getch();
}
