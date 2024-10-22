#include <bits/stdc++.h>


using namespace std;


class sinhvien{
	public:
	string msv,name,ml,emal,th;
	friend istream &operator>>(istream &input,sinhvien &a){
		cin>>a.msv;
		cin.ignore();
		getline(cin,a.name);
		cin>>a.ml>>a.emal;
		a.th= a.ml[1];a.th=a.th+a.ml[2];
		return input;
	}
	
	friend ostream &operator<<(ostream &output,sinhvien a){
		cout<<a.msv<<" "<<a.name<<" "<<a.ml<<" "<<a.emal;
		return output;
	}
};
bool cmp(sinhvien a,string b){
	return a.th==b;
}

int main(){
	sinhvien ds[1004];
	int n,i;cin>>n;
	for (i=0;i<n;i++){
		cin>>ds[i];
	}
	int t;cin>>t;
	while(t--){
		string a;cin>>a;
		string x="";
		x=a[2];
		x=x+a[3];
		cout<<"DANH SACH SINH VIEN KHOA "<<a<<":"<<endl;
		for (i=0;i<n;i++){
			if (cmp(ds[i],x)) cout<<ds[i]<<endl;
		}
	}
}