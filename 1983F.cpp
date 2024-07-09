#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define no() cout << "NO" << endl;
#define yes() cout << "YES" << endl;
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    int k;
    cin>>k;
    vector<int > a(n);
 
    vector<int > ans; 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {    vector<int> temp;
            for (int k = i; k <= j; ++k) {
                temp.push_back(a[k]);
            }
            int h=INT_MAX;
        
            for(int w=0;w<temp.size();w++)
            {
                for(int q=w+1;q<temp.size();q++)
                {
                    int curr=temp[w]^temp[q];
                    h=min(curr,h);
                
                }
    
            }
            ans.push_back(h);
            
        }
    }
 
   
    sort(ans.begin(),ans.end());
    cout<<ans[k-1]<<endl;
    return;
 
 
}
 
int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}