#include <iostream>
#include <vector>
#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>

using namespace std;

void minimizeInversions(int n, vector<int>& a, vector<int>& b) {
    // Create sorted versions of permutations a and b
    vector<int> sorted_a(a.begin(), a.end());
    vector<int> sorted_b(b.begin(), b.end());

    sort(sorted_a.begin(), sorted_a.end());
    sort(sorted_b.begin(), sorted_b.end());

    // Output the sorted permutations
    for (int i = 0; i < n; ++i) {
        cout << sorted_a[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; ++i) {
        cout << sorted_b[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int j = 0; j < n; ++j) {
            cin >> a[j];
        }

        for (int j = 0; j < n; ++j) {
            cin >> b[j];
        }

        minimizeInversions(n, a, b);
    }

    return 0;
}
