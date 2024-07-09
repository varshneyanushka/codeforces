#include<bits/stdc++.h>
#include <iostream>
#include <set>
#define ll long long
using namespace std;

void solve() {
    int b;
    cin>>b;
    string s;
    cin>>s;
    set<char > uni (s.begin(), s.end());
    vector<char > so(uni.begin(), uni.end());
    sort(so.begin(), so.end());
    string r=string(so.begin(), so.end());
    unordered_map<char,char> map;
    
    for(int i=0;i<r.length();i++)
    {
        map[r[i]]=r[r.length()-1-i];
    }
    for(int i=0;i<s.length();i++)
    {
        s[i]=map[s[i]];
    }
    cout<<s<<endl;
    return;
   
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();

    }
}