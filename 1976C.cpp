#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;


int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}


int lcm(int a, int b) {
    return abs(a / gcd(a, b) * b);
}


void sequence(int index, int currentLcm, int length, int &maxLength, vector<int> &a, unordered_set<int> &a_set) {
    if (index == a.size()) {
        
        if (a_set.find(currentLcm) == a_set.end()) {
            maxLength = max(maxLength, length);
        }
        return;
    }
    
     
    int newLcm = currentLcm == 0 ? a[index] : lcm(currentLcm, a[index]);
    sequence(index + 1, newLcm, length + 1, maxLength, a, a_set);

     
    sequence(index + 1, currentLcm, length, maxLength, a, a_set);
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_set<int> a_set;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        a_set.insert(a[i]);
    }

    int maxLength = 0;
    sequence(0, 0, 0, maxLength, a, a_set);
    
    cout << maxLength << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
