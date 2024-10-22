#include <bits/stdc++.h>

int ii=1;
using namespace std;

class gvien{
	public:
	string name,mon;
	int ma;
	
	friend istream &operator>>(istream &input,gvien &a){
		a.ma=ii;
		ii++;
		cin.ignore();
		getline(cin,a.name);
		getline(cin,a.mon);
		return input;
	}
	
	friend ostream &operator<<(ostream &output,gvien a){
		cout<<"GV"<<setfill('0')<<setw(2)<<a.ma<<" "<<a.name<<" "<<a.mon<<endl;
		return output;
	}
	
};

int check(string a,string b){
	for (int i=0;i<a.size();i++){
		a[i]=tolower(a[i]);
	}
	for (int i=0;i<b.size();i++){
		b[i]= tolower(b[i]);
	}
	if (a.find(b)!=string::npos){
		return 1;
	}
	return 0;
}

int main(){
	int n;cin>>n;
	gvien ds[10003];
	for (int i=0;i<n;i++){
		cin>>ds[i];
	}
	int k;cin>>k;
	while(k--){
		string s;cin>>s;
		cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<s<<":"<<endl;
		for (int i=0;i<n;i++){
			if (check(ds[i].name,s)) cout<<ds[i];
		}
	}
	
}