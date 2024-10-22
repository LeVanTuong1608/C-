#include <bits/stdc++.h>

using namespace std;


class sinhvien{
	public:
		string name,msv,ml,email;
		friend istream &operator>>(istream &input,sinhvien &a){
			cin>>a.msv;
			cin.ignore();
			getline(cin,a.name);
			cin>>a.ml>>a.email;
			return input;
		}
		friend ostream &operator<<(ostream &output,sinhvien a){
			cout<<a.msv<<" "<<a.name<<" "<<a.ml<<" "<<a.email<<endl;
			return output;
		}
};


bool cmp(sinhvien a,sinhvien b){
	if (a.ml==b.ml){
		return a.msv<b.msv;
	}
	return a.ml<b.ml;
}

void sapxep(sinhvien a[],int n){
	sort(a,a+n,cmp);
}
int main(){
	sinhvien ds[1001];
	int n;cin>>n;
	for (int i=0;i<n;i++) cin>>ds[i];
	sapxep(ds,n);
	for (int i=0;i<n;i++) cout<<ds[i];
}