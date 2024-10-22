#include <bits/stdc++.h>

using namespace std;
int ii=1;
void dev(string a,vector <string>&v){
	string x="";
	for (int i=0;i<a.size();i++){
		a[i]=tolower(a[i]);
		if (a[i]==' '){
			v.push_back(x);
			x="";
		}
		else x=x+a[i];
	}
	v.push_back(x);
}

void chuanhoa(string &a){
	vector<string>v;
	dev(a,v);
	a="";
	for (int i=0;i<v.size();i++){
		if (v[i]!=""){
			v[i][0]=toupper(v[i][0]);
			a=a+v[i];
			a = a+" ";
		}
	}
}
class SinhVien{
	public:
		int msv;
		string name,ml,birth;
		float gpa;
	friend istream &operator>>(istream &input,SinhVien &a){
		cin.ignore();
		getline(cin,a.name);
//		getline(cin,a.ml);
//		getline(cin,a.birth);
//		cin>>a.gpa;
		cin>>a.ml>>a.birth>>a.gpa;
		return input;
	}
	friend ostream &operator<<(ostream &ouput,SinhVien a){
		a.msv=ii++;
		if (a.birth[1]=='/') a.birth="0"+a.birth;
		if(a.birth[4]=='/')a.birth=a.birth.insert(3,"0");
		chuanhoa(a.name);
		cout<<"B20DCCN"<<setfill('0')<<setw(3)<<a.msv;
		cout<<" "<<a.name<<" "<<a.ml<<" "<<a.birth<<" ";
		printf("%.2f\n",a.gpa);
		return ouput;
	}
};



int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
