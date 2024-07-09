#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long
#define no() cout << "NO" << endl
#define yes() cout << "YES" << endl

void solve() {
    ll n;
    cin >> n;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    if (a == b) {
        yes();
        return;
    }

    vector<int> a_even, a_odd, b_even, b_odd;

    
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            a_even.push_back(a[i]);
            b_even.push_back(b[i]);
        } else {
            a_odd.push_back(a[i]);
            b_odd.push_back(b[i]);
        }
    }

    
    sort(a_even.begin(), a_even.end());
    sort(a_odd.begin(), a_odd.end());
    sort(b_even.begin(), b_even.end());
    sort(b_odd.begin(), b_odd.end());

    
    if ((a_even == b_odd) && (a_odd == b_even)) {
        yes();
    } else {
        no();
    }
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
