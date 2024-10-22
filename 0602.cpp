#include <bits/stdc++.h>
#define a() a
using namespace std;

class SinhVien{
public:
	string msv;	
	string name,ml,birth;
	float gpa;
	friend istream &operator>> (istream &input,SinhVien &a){
		a.msv="B20DCCN001";
		getline(cin,a.name);
		cin>>a.ml>>a.birth>>a.gpa;
		if (a.birth[1]=='/') a.birth="0" +a.birth;
		if (a.birth[4]=='/') a.birth=a.birth.insert(3,"0");
		return input;
	}
	friend ostream &operator <<(ostream &output,SinhVien a){
		cout<<a.msv<<" "<<a.name<<" "<<a.ml<<" "<<a.birth<<" ";
		printf ("%.2lf",a.gpa);
		return output;
	}
};



int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}

