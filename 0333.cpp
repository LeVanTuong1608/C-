//#include<bits/stdc++.h>
#include <iostream>
//#include <string.h>
#include <vector>
#include <sstream>

using namespace std; 
string hoa (string s){ 
	for(int i = 0; i < s.size();i++){ s[i] = toupper(s[i]); } return s; } 


int main(){ 
	string s; 
	getline(cin,s); 
	for(int i = 0; i < s.size();i++){ 
		s[i] = tolower(s[i]);
	}
	vector<string> v; 
	stringstream tt(s); 
	string word; 
	while(tt >> word){ 
		word[0] = toupper(word[0]);
		 v.push_back(word);
		 } 
	for(int i = 0; i < v.size() - 1; i++){ 
		cout << v[i]; 
		if(i != v.size() - 2){ 
			cout <<" "; } } 
	cout << ", " << hoa (v[v.size() - 1]); 
	return 0;
 }


