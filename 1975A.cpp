#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

    vector<int> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());
    
    for (int i = 0; i < n; ++i) {
        bool is_sorted = true;
        for (int j = 0; j < n; ++j) {
            if (a[(i + j) % n] != sorted_a[j]) {
                is_sorted = false;
                break;
            }
        }
         if (is_sorted) {
            cout << "Yes" << endl;
            return;
        }
    }
     
            cout << "No" << endl;
        
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
