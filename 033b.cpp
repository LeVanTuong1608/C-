#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string chuanhoa(string s){
	if(s[0]<='z'&&s[0]>='a'){
		s[0]=-32;
	}
	for (int i=1;i<s.size();i++){
		if (s[i]>='A'&& s[i]<='Z'){
			s[i]+=32;
		}
	}
	return s;
}
string viethoa(string s){
	s[0]= tolower(s[0]);
	for (int i=1;i<s.size();i++){
		if (s[i]>='a'&&s[i]<='z'){
			s[i]-=32;
		}
	}
	return s;
}
int main(){
	string s;
	getline(cin,s);
	vector <string> v;
	stringstream ss(s);
	string word;
	while (ss>> word){
		word[0]=toupper(word[0]);
		v.push_back(word);
		
	}
		for(int i = 0; i < v.size() - 1; i++){ 
		v[i]=viethoa(v[i]);
		cout << v[i]; 
		if(i != v.size() - 2){ 
			cout <<" "; } } 
	cout << ", " << chuanhoa (v[v.size() - 1]); 
	return 0;
	
}
