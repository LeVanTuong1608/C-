#include <bits/stdc++.h>

using namespace std;
int ii=1;

class SinhVien{
	public:
		int msv;
		string name,ml,birth;
		float gpa;
	friend istream &operator>>(istream &input,SinhVien &a){
		cin.ignore();
		getline(cin,a.name);
		//getline(cin,a.ml);
		cin>>a.ml>>a.birth>>a.gpa;
		return input;
	}
	friend ostream &operator<<(ostream &ouput,SinhVien a){
		a.msv=ii++;
		if (a.birth[1]=='/') a.birth="0"+a.birth;
		if(a.birth[4]=='/')a.birth=a.birth.insert(3,"0");
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
