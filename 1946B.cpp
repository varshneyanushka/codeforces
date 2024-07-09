#include<bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;

void solve()
{
    ll n,k;
    cin>>n>>k;
    ll a[n];
    const ll M = 1e9 + 7;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }

    ll ans = 0;
        for(ll i = 0; i < n; i++) 
        {
            for(ll j = i, curSum = 0; j < n ; j++) 
            {
                 curSum += a[j],
                ans = max(ans, curSum);  
            }
               
        }     
    ll sum=0;     
    for(ll i=0;i<n;i++)
    {
        sum+=a[i]%M;
        sum%=M;
    }
    
    ll w = ;
    for(ll i = 0; i < k; i++) {
        w += (1<<i)%M;
        w%=M;
         // Equivalent to pow(2, i)
    }

    sum+=w%M;
    sum%=M;
    sum+=M;
   // cout<<sum%M<<endl;
   //cout<<sum<<endl;
   // cout<<ans<<endl;
    
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
