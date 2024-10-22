#include <bits/stdc++.h>
#include <vector>

#include <iostream>
#include <cstring>
#define a() a
using namespace std;

void dev(string a,vector<string> &b){
	string x="";
	for (int i=0;i<a.size();i++){
		a[i]=tolower(a[i]);
		if (a[i]==' '){
			b.push_back(x);
			x="";
		}
		else x=x+a[i];
	}
	b.push_back(x);
}

void chuanhoa(string &a){
	vector<string>b;
	dev(a,b);
	a="";
	for (int i=0;i<b.size();i++){
		if (b[i]!=""){
			b[i][0]=toupper(b[i][0]);
			a=a+b[i];
			a=a+" ";
		}
		
	}
}
 	
class SinhVien{
public:
	string msv;	
	string name,ml,birth;
	float gpa;

	friend istream &operator>> (istream &input,SinhVien &a){
		a.msv="B20DCCN001";
		getline(cin,a.name);
		cin>>a.ml>>a.birth>>a.gpa;
		if (a.birth[1]=='/') a.birth='0'+a.birth;
		if (a.birth[4]=='/') a.birth=a.birth.insert(3,"0");
		chuanhoa(a.name);
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

