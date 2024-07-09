#include<bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;

void solve() 
{
    string s;
    cin>>s;
     for(int i=0;i<s.length()-1;i++)
     {
        if(s[i]!=s[i+1])
        {
            swap(s[i],s[i+1]);
            cout<<"YES"<<endl;
            cout<<s<<endl;
            return;
        }
        
     }
     cout<<"NO"<<endl;
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