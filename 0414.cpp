#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
    
    
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        set<int> data;
        for (int i = 0; i < n; i++) {
            int temp = a[i];
            while (temp > 0) {
                int m = temp % 10;
                data.insert(m);
                temp /= 10;
            }
        }

        for (auto it = data.begin(); it != data.end(); it++) {
            cout << *it << ' ';
        }
        cout << endl;
    }

    return 0;
}