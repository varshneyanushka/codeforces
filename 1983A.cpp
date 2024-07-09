#include <bits/stdc++.h>
#include <iostream>
#define ll long long
#define no() cout << "NO" << endl;
#define yes() cout << "YES" << endl;
using namespace std;

void solve() {
    ll n;
    cin >> n;
    int a[n];
    for (ll i = 0; i < n; i++) {
        a[i]=i+1;
    }
    for (ll i = 0; i < n; i++){
        cout<<a[i]<<endl;
    }
    cout<<endl;
    return;
    
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}