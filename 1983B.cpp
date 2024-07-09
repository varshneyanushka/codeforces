#include <bits/stdc++.h>
#include <iostream>
#define ll long long
#define no() cout << "NO" << endl;
#define yes() cout << "YES" << endl;
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int> > a(n, vector<int>(m));
    vector<vector<int> > b(n, vector<int>(m));

    for (int i = 0; i < n; ++i) {
        string line;
        cin >> line;
        for (int j = 0; j < m; ++j) {
            a[i][j] = line[j] - '0';
        }
    }

    for (int i = 0; i < n; ++i) {
        string line;
        cin >> line;
        for (int j = 0; j < m; ++j) {
            b[i][j] = line[j] - '0';
        }
    }

    int sumA = 0, sumB = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            sumA += a[i][j];
            sumB += b[i][j];
        }
    }
   
   

    cout << "sumA: " << sumA << ", sumB: " << sumB << endl;  // Debug print

    if (sumA == sumB) {
        yes();
    } else {
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
