#include <bits/stdc++.h>
#include <iostream>
#define ll long long
#define no() cout << "No" << endl;
#define yes() cout << "Yes" << endl;
using namespace std;

void solve() {
    int n;
    cin >> n;
    int m;cin>>m;
    // int a[n];
    // for (int i = 0; i < n; i++) {
    //     cin >> a[i];
    // }
    if(n<m)
    {
        no();
        return;
    }
    if(n==m)
    {
        yes();
        return;

    }
    if((n-m)%2 == 0)
    {
        yes();

    }
    else{
        no();
    }

    return;
    
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}