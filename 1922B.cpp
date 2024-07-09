#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
        int n;
        cin >> n;
        vector<int> s(n);

        for (int i = 0; i < n; ++i) {
            cin >> s[i];
        }
        if(n<3)
        {
            cout << 0 << endl;
            return;
        }
        
        sort(s.begin(), s.end());
        int count = 0;
       
        for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if (s[i] + s[j] >= s[k]) {
                    count++;
                } else {
                    break; 
                }
            }
        }
    }

    cout << count << endl;
    return ;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        
        solve();
        
    }

    return 0;
}
