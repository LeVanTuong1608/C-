#include <bits/stdc++.h>

using namespace std;

void dev(string s,vector<string> &a){
	string x="";
	for (int i=0;i<s.size();i++){
			s[i]=tolower(s[i]);
		if (s[i]=' '){
			a.push_back(x);
			x="";
		}
		else x=x+s[i];
		
	}
	a.push_back(x);
}

void chuanhoa(string &s){
	vector<string> a;
	string x="";
	dev(s,a);
	s="";
	for (int i=0;i<a.size();i++){
		if (a[i]!=""){
			a[i][0]= toupper(a[i][0]);
			s=s+a[i];
			s=s+" ";
		}
	}
	
	for (int i=0;i<s.size();i++){
		cout<<s[i];
	}

}


//int main(){
//	int t;cin>>t;
//	while(t--){
//		string s;
//		cin.ignore();
//		getline(cin,s);
//		chuanhoa(s);
//		for (int i=0;i<s.size();i++){
//			cout<<s[i];
//		}
//		cout<<endl;
//		
//	}
////	return 0;
//	
//}

int main(){

	int t;cin>>t;
	string a[10000];
	for (int i=0;i<t;i++){
		cin.ignore();
		getline(cin,a[i]);
//		chuanhoa(a[i]);
		
	}
	for (int i=0;i<t;i++){
		chuanhoa(a[i]);
		cout<<endl;
	}
	
}

