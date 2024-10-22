#include <bits/stdc++.h>

using namespace std;
struct SinhVien{
	string MSV;
	string name;
	string lop;
	string date;
	float diem;
};
void nhap(SinhVien &x){
	x.MSV=  "B20DCCN001";
	getline(cin,x.name);
	cin>>x.lop;
	cin>>x.date;
	cin>>x.diem;
	if (x.date[1]=='/') x.date="0"+x.date;
	if (x.date[4]=='/') x.date = x.date.insert(3,"0");

}
void in(SinhVien X){
	cout<<X.MSV<<" "<<X.name<<" "<<X.lop<<" "<<X.date<<" "<<fixed<<setprecision(2)<<X.diem;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}

