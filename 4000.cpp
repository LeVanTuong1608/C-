#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
	string MSV;
	string name;
	string ML;
	string date;
	float GDP;
};

void nhapThongTinSV(SinhVien &x){
	getline(cin,x.name);
	cin>>x.ML>>x.date>>x.GDP;
	if (x.date[1]=='/') x.date="0"+ x.date;
	if (x.date[4]=='/') x.date= x.date.insert(3,"0");
	x.MSV="N20DCCN001";
	
}
void inThongTinSV(SinhVien X){
	cout<<X.MSV<<" "<<X.name<<" "<<X.ML<<" "<<X.date<<" "<<fixed<<setprecision(2)<<X.GDP;
}


int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
