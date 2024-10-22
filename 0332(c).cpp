#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
	string a;
//	cin.ignore();
	getline(cin,a);
	vector <string> b;
	string x="";
	for (int i=0;i<a.size();i++){
		if (a[i]==' '){
			b.push_back(x);
			x="";
		}
		else {
		if (a[i]>='A'&&a[i]<='Z')	a[i]=tolower(a[i]);
			x=x+a[i];
		}
	}
	b.push_back(x);
	cout<<b[b.size()-1];
	for (int i=0;i<b.size()-1;i++){
		cout<<b[i][0];
	}
	cout<<"@ptit.edu.vn";
}
