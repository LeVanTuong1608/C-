#include <bits/stdc++.h>
#define a() a
using namespace std;

class NhanVien{
	public:
		string name,birth,diachi,number,date,ma;
		friend istream &operator>>(istream &input,NhanVien &a){
			a.ma="00001";
			getline(cin,a.name);
			cin>>a.birth>>a.diachi>>a.number>>a.date;
			return input;
			
		}
		
		friend ostream &operator <<(ostream &output,NhanVien a){
			cout<<a.ma<<" "<<a.name<<" "<<a.birth<<" "<<a.diachi<<" "<<a.number<<" "<<a.date<<endl;
			return output;
		}
};


int main(){
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}