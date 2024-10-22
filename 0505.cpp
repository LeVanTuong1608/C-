#include <bits/stdc++.h>

using namespace std;

struct NhanVien{
	string MA;
	string name;
	string  sex;
	string date;
	string 	adress;
	string number;
	string namsinh;
};
void nhap( NhanVien &x){
	x.MA ="00001";
	getline(cin,x.name);
	cin>>x.sex>>x.date;
	cin.ignore();
	getline(cin,x.adress);
	cin>>x.number>>x.namsinh;
	if (x.date[1]=='/') x.date= "0"+ x.date;
	if (x.date[4]=='/') x.date= x.date.insert(3,"0");
	if (x.namsinh[1]=='/') x.namsinh= "0"+ x.namsinh;
	if (x.namsinh[4]=='/') x.namsinh= x.namsinh.insert(3,"0");
}

void in(NhanVien X){
	cout<<X.MA<<" "<<X.name<<" "<<X.sex<<" "<<X.date<<" "<<X.adress<<" "<<X.number<<" "<<X.namsinh;
	
}





int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}

