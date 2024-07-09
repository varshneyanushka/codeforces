#include<bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int temp=(n-1)/2;
    int ans=1;
    for(int i=temp;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            ans++;
        }
        else
        {
            break;
        }
    }
    cout<<ans<<endl;



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
