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
        cin >> a[i];
    }
    sort(a,a+n);
    int ans=a[n-1]+1;
    cout<<ans<<endl;
    return;


}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}