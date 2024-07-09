#include<bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;

void solve() {
    string s;
    cin>>s;
    if(s.length()==1)
    {
        cout<<1<<endl;
        return;
    }
    int cuts=1;
    for(int i=1;i<s.length();i++)
    {
        if(s[i-1]==0 && s[i]==1 && cuts!=1)
        {
            cuts++;
        }
        else if(s[i-1]==1 && s[i]==0)
        {
            cuts++;
        }
        else{
            continue;
        }


    }
    if (s[s.length() - 1] == '0') {
        cuts++;
    }
    bool q=false;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            q=true;
        }
        else{
            q=false;
            break;

        }
    }
    if(q==true)
    {
        cuts=1;

    }
    cout<<cuts<<endl;
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