#include <bits/stdc++.h>
#define a() a
using namespace std;

class SinhVien{
	public;
	string msv,name,ma,date;
	float gpa;
};
 void nhap(SinhVien &a){
 	cin.ignore();
 	getline(cin,a.name);
 	cin>>a.ma>>a.date>>a.gpa;
 	if (a.date[1]=='/') a.date= "0" +a.date;
 	if (a.date[4]=='/') a.date= a.date.insert(3,"0");
 }
 void xuat(SinhVien a){
 	cout<<a.ma<<" "<<a.name<<" "<<a.ma<<" ";
 	printf("%2.f",a.gpa);
 }
//
//int main(){
//    SinhVien a;
//    a.nhap();
//    a.xuat();
//    return 0;
//}

int main(){
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}
