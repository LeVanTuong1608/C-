#include <bits/stdc++.h>
#include<iomanip>
using namespace std;

class SinhVien{
private :
	string msv;	
	string name,ml,birth;
	float gpa;
public:
//	SinhVien(){
//	}
//	SinhVien(string n){
//		name=n;
//	}
//	friend void nhap(SinhVien&);
//	friend void in(SinhVien);
	
void nhap(){
	msv="B20DCCN001";
	getline(cin,name);
	cin>>ml>>birth>>gpa;
	if (birth[1]=='/') birth ="0"+birth;
	if (birth[4]=='/') birth= birth.insert(3,"0");
}
void xuat(){
	cout<<msv<<" "<<name<<" "<<ml<<" "<<birth<<" ";
	printf("%.2lf",gpa);
}
};
//void nhap(SinhVien& x){
//	x.msv="B20DCCN001";
//	getline(cin,x.name);
//	cin>>x.ml>>x.birth>>x.gpa;
//	if (x.birth[1]=='/') x.birth ="0"+x.birth;
//	if (x.birth[4]=='/') x.birth= x.birth.insert(3,"0");
//}
//void in(SinhVien X){
//	cout<<X.msv<<" "<<X.name<<" "<<X.ml<<" "<<X.birth<<" ";
//	printf("\n%.2llf",X.gpa);
//}
#define a() a;

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}

