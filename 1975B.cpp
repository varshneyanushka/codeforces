#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long
#define no() cout << "No" << endl;
#define yes() cout << "Yes" << endl;

void solve() {
    ll n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> temp=a;
    
    sort(temp.begin(),temp.end());
    int m=temp[0];
    if(m==1)
    {
        yes();
        return;
    }
    int k=temp[1];
    
    for(int i=0;i<n;i++)
    {
        if(temp[i]%m!=0)
        {
            k=temp[i];
        }
    }

    
    for(int i=0;i<n;i++)
    {
        if (a[i] % m != 0 && a[i] % k != 0) {
            no();
            return;
        }
    }

    yes();
    return;





   
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
