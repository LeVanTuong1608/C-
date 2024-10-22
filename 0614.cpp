#include <bits/stdc++.h>

using namespace std;

int ii=1;
class NhanVien{
	public:
		int msv;
		string name,birth,diachi,number,date,sex;
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
			return input;
		}
		friend ostream &operator<<(ostream &output,NhanVien a){
			cout<<setfill('0')<<setw(5)<<a.msv<<" "<<a.name<<" "<<a.sex;
			cout<<" "<<a.birth<<" "<<a.diachi<<" "<<a.number<<" "<<a.date<<endl;
			return output;
		}
};

int main(){
	NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}