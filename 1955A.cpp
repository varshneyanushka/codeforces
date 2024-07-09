#include<bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;

void solve() {
    ll n,a,b;
    cin>>n>>a>>b;
    if((2*a)>b)
    {
        if(n%2==0)
        {
            cout<<b*(n/2)<<endl;
        }
        else{
            cout<<(n/2)*b + a<<endl;
        }
    }
    else
    {
        cout<<n*a<<endl;

    }
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