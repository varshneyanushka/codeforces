#include <bits/stdc++.h>
#include <iostream>
#define ll long long
#define no() cout << "NO" << endl;
#define yes() cout << "YES" << endl;
using namespace std;

void solve() {
    ll n;
    cin >> n;
    string s;
    cin>>s;
    string copy=s;
    sort(s.begin(),s.end());
    //cout<<"copy"<<copy;
    if(copy==s)
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