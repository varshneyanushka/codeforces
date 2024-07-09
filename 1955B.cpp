#include<bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;

void solve() {
    ll n, c, d;
    cin >> n >> c >> d;
    int l = n * n;

    vector<int> a(l);
    for (ll i = 0; i < (n * n); i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    
    vector<int> r;
    for (int i = 0; i < n; i++) {
        r.push_back(a[0] + (i * d));
    }

    for (int i = 0; i < n; i++) {
        int val = r[i]; 
        
        for (int j = 1; j < n; j++) {
            r.push_back(val + (j * c)); 
        }
    }
    
    sort(r.begin(), r.end());
    


    if (r == a) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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
