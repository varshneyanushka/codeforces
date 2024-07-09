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
    string s(n,'R');
    if(a[n-1]==a[0])
    {
        no();
        return;

    }
    s[1]='B';
    yes();
    cout<<s<<endl;
    return;
    

}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}