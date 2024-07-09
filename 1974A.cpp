#include<bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;

void solve() {
    double x,y;
    cin>>x>>y;
    int s;
    int q;
    int t=s+q;
    int ans=1;
    s=ceil(y/2);
    if(y==0 && x==0 )
    {
       cout<<0<<endl;return;
       
    }
    q=15*s -(4*y);
    while(q<x)
    {
        q=q+15;
        s++;
    }
    
        cout<<s<<endl;

    
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