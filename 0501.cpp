#include <bits/stdc++.h>

using namespace std;

struct Point{
	double x,y;
};

void input(Point &k){
	cin>>k.x>>k.y;
}
double distance(struct Point a,struct Point b){
	double t=0;
		t=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
		return t;
	}


int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;

