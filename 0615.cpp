#include <bits/stdc++.h>

using namespace std;

int ii=1;
class NhanVien{
	public:
		int msv;
		string name,birth,diachi,number,date,sex;
		string ng,th,nm;
		friend istream &operator>>(istream &input,NhanVien &a){
			a.msv=ii;
			ii++;
			cin.ignore();
			getline(cin,a.name);
//			cin>>a.sex;
			getline(cin,a.sex);
//			cin>>a.birth;
			getline(cin,a.birth);
//			cin.ignore();

			getline(cin,a.diachi);
			cin>>a.number>>a.date;
			a.ng+=a.birth[3];	a.ng+=a.birth[4];
			a.th+=a.birth[0];	a.th+=a.birth[1];
			a.nm+=a.birth[6];	a.nm+=a.birth[7];
			a.nm+=a.birth[8];	a.nm+=a.birth[9];
			
			return input;
		}
		friend ostream &operator<<(ostream &output,NhanVien a){
			cout<<setfill('0')<<setw(5)<<a.msv<<" "<<a.name<<" "<<a.sex;
			cout<<" "<<a.birth<<" "<<a.diachi<<" "<<a.number<<" "<<a.date<<endl;
			return output;
		}
};
bool cmp(NhanVien a,NhanVien b){
	if (a.nm==b.nm){
		if (a.th==b.th){
			return a.ng<b.ng;
		}
		return a.th<b.th;
	}
	
	return a.nm<b.nm;
}
void sapxep(NhanVien a[],int n){
	sort(a,a+n,cmp);
}

int main(){
	NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}