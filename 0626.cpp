#include <bits/stdc++.h>
int ii=1;
using namespace std;
void dev (string a,vector<string> &b){
	string x="";
	for (int i=0;i<a.size();i++){
		if(a[i]==' '){
			b.push_back(x);
			x="";
		}
		else{
			x=x+a[i];
		}
	}
		b.push_back(x);
}
void check(string a,string &b){
	vector<string>v;
	b="";
	dev(a,v);
	for (int i=0;i<v.size();i++){
		v[i][0] = toupper(v[i][0]);
		b=b+v[i][0];
	}
}


class giangvien{
	public:
		int ma;
	string name,mon,kt;
	
	friend istream &operator>>(istream &input,giangvien &a){
		a.ma=ii;
		cin.ignore();
		getline(cin,a.name);
		getline(cin,a.mon);
		check(a.mon,a.kt);
		ii++;
		return input;
	}
	
	friend ostream &operator<<(ostream &output,giangvien a){
		cout<<"GV"<<setfill('0')<<setw(2)<<a.ma<<" ";
		cout<<a.name<<" "<<a.kt<<" ";
		return output;
	}
};


bool cmp(giangvien a,string b){
	return a.mon== b;
}

int main(){
	int n,i;
	cin>>n;
	giangvien ds[10002];
	for (i=0;i<n;i++){
		cin>>ds[i];
	}
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string a,c;
		int k=1;
		getline(cin,a);
		check(a,c);
		cout<<"DANH SACH GIANG VIEN BO MON "<<c<<":"<<endl;
		for (i=0;i<n;i++){
			if (cmp(ds[i],a)){
				cout<<ds[i]<<endl;
			}
		}
	}
}