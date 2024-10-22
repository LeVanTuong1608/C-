#include<bits/stdc++.h>


using namespace std;

int check(string n){
    int r=0,l=n.size()-1;
    if(l==0) return 0;
    while(r<=l){
        if (n[r]!=n[l]){
            return 0;
        }
        r++;
        l--;
    }
    return 1;
}
int main(){
    // int n;cin>>n;
//	faster();
    string n;
    ifstream>>n;
   // getline(cin,n);
    map<string,int>ma;
    stringstream ss(n);
    string s;
    while(ss>>s){
        ma[s]++;
    }
    for (auto x=ma.rbegin();x!=ma.rend();++x){
        if (check(x->first)==1){
            cout<<x->first<<" "<<x->second<<endl;
        }
    }
}