#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <vector>
#define ll long long
#define no() cout << "NO" << endl;
#define yes() cout << "YES" << endl;
using namespace std;

void solve() {
    ll n;
    cin >> n;
    ll m;
    cin>>m;
    string a;
    cin>>a;
    int ans=0;
    map<char,int> map;
    for (ll i = 0; i < n; i++)
    {
        map[a[i]]++;

    }
   string s = "ABCDEFG";
   for(char c :s)
   {
     if(map[c]==0)
     {
        ans+=m;
     }
     else if(map[c]<m)
      {
        ans+=map[c]%m;
      }
      
      
   }
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