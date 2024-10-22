#include <bits/stdc++.h>
#include <string>

#include<iostream>
#include<cstdlib>

#include<iostream>
#include<cstdlib>
#include<cstring>


using namespace std;

int main(){
	int t;cin>>t;
	string a[t];
	cin.ignore();
	for (int i=0;i<t;i++){
		getline(cin,a[i]);
	}
	int cmp=0;
	for (int i=0;i<t-1;i++){
		for (int j=i+1;j<t;j++){
			if (strcmp(a[i],a[j])=0){
				
			}
			else cmp++;
		}
	}
	cout<<cmp<<endl;
}
