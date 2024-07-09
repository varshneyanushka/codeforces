#include <iostream>
#include<bits/stdc++.h>
using namespace std;

long long solve(long long a, long long b, long long r) {
    // Find the rightmost differing bit
    long long xorResult = a ^ b;
    long long rightmostBit = 1LL << (63 - __builtin_clzll(xorResult));

    // Calculate the possible value of x
    long long x = min(r, rightmostBit - 1);

    // Calculate the absolute difference
    return abs((a ^ x) - (b ^ x));
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, r;
        cin >> a >> b >> r;

        // Output the smallest possible value
        cout << solve(a, b, r) << endl;
    }

    return 0;
}
