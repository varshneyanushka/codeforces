#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n, c, d;
    cin >> n >> c >> d;

    // Read the elements from input
    vector<int> b(n * n);
    for (int i = 0; i < n * n; i++) {
        cin >> b[i];
    }

    // Sort the elements
    sort(b.begin(), b.end());

    // Generate the progressive square matrix
    vector<vector<int > > square(n, vector<int>(n));
    square[0][0] = b[0]; // First element of the square
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) continue; // Skip the first element
            if (j > 0) {
                square[i][j] = square[i][j-1] + c;
            } else {
                square[i][j] = square[i-1][j] + d;
            }
        }
    }

    // Flatten the generated square matrix into a 1D vector
    vector<int> generated_b;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            generated_b.push_back(square[i][j]);
        }
    }

    // Check if the generated vector matches the input array
    if (generated_b == b) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
