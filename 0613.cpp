#include <bits/stdc++.h>

using namespace std;
int ii=1;
//int cmp(SinhVien a,SinhVien b){
//	if (a.)
//}

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
	int msv;
	string name,ml,birth;
	float gpa;
	
	friend istream &operator>>(istream &input,SinhVien &a){
		a.msv=ii;
		ii++;
		cin.ignore();
		getline(cin,a.name);
		cin>>a.ml>>a.birth>>a.gpa;
		return input;
	}
	
	friend ostream &operator<<(ostream &output,SinhVien a){
		if (a.birth[1]=='/') a.birth="0"+a.birth;
		if (a.birth[4]=='/') a.birth= a.birth.insert(3,"0");
		chuanhoa(a.name);
		cout<<"B20DCCN"<<setfill('0')<<setw(3)<<a.msv<<" "<<a.name<<" ";
		cout<<a.ml<<" "<<a.birth<<" ";
//		cout<<fixed<<setprecision(2)<<a.gpa<<endl;
		printf("%.2f\n",a.gpa);
		return output;
	}
};
bool cmp(SinhVien a,SinhVien b){
	return a.gpa>b.gpa;
}
void sapxep(SinhVien a[],int n){
	sort(a,a+n,cmp);
}


int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}