#include <bits/stdc++.h>


using namespace std;

class sinhvien{
	public:
	string msv,name,ml,email;
	friend istream &operator>>(istream &input,sinhvien &a){
		cin>>a.msv;
		cin.ignore();
		getline(cin,a.name);
		cin>>a.ml>>a.email;
		return input;
	}
	
	friend ostream &operator<<(ostream &output,sinhvien a){
		cout<<a.msv<<" "<<a.name<<" "<<a.ml<<" "<<a.email;
		return output;
	}
};
int cmp(sinhvien c,string b){
	if (c.ml==b) return 1;
	return 0;
}


int main(){
	sinhvien ds[1001];
	int n,i;cin>>n;
	for (i=0;i<n;i++){
		cin>>ds[i];
	}
	int t;
	cin>>t;
	while(t--){
		string a;cin>>a;
		cout<<"DANH SACH SINH VIEN LOP "<<a<<":"<<endl;
		for(i=0;i<n;i++){
			if(cmp(ds[i],a)==1){
				cout<<ds[i]<<endl;
			}
		}
	}
}