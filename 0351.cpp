#include <bits/stdc++.h>
#include <vector>


using namespace std;
string chuanhoa(string a){
	for (int i=0;i<a.size();i++){
//		if (a[i] !=" "){
			a[i]=tolower(a[i]);
//		}
	}
	return a;
}

void chuanhoa1(string a){
	for (int i=0;i<a.size();i++){
		a[i]=tolower(a[i]);
	}
	stringstream ss(a);
	string word;
	vector<string > b;
	while(ss>>word){
		word[0]=toupper(word[0]);
		b.push_back(word);
	}
	cout<<b[b.size()-1]<<" ";
	for (int i=0;i<b.size()-1;i++){
		cout<<b[i]<<" ";
	}
}
void chuanhoa2(string n){
	for (int i=0;i<n.size();i++){
		n[i]=tolower(n[i]);
	}
	stringstream ss(n);
	string word;
	vector<string > b;
	while(ss>>word){
		word[0]=toupper(word[0]);
		b.push_back(word);
	}
	for (int i=1;i<b.size();i++){
		cout<<b[i]<<" ";
	}
	cout<<b[0]<<" ";
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n;
		string a,b;
		cin.ignore();
		getline(cin,a);
//		cin>>k;
//		cin.ignore();
//		getline(cin,b);
		if (n==1){
			chuanhoa1(a);
		}
		if (n==2){
			chuanhoa2(a);
		}
		cout<<endl;
//		if (k==1){
//			chuanhoa1(b);
//		}
//		if (k==2){
//			chuanhoa2(b);
//		}
//		cout<<endl;
	}
	return 0;
}
