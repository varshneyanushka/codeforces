#include<bits/stdc++.h>
#include <iostream>
#define ll long long
#define speed ios_base::sync_with_stdio(0),cin.tie(0), cout.tie(0);
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll f, a, b;
    cin >> f >> a >> b;

    vector<ll> m(n);  

    for (ll i = 0; i < n; i++)
    {
        cin >> m[i];
    }

    ll di;
    di = min(a * (m[0] - 0),b );
    f = f - di;

    for (ll i = 1; i < n; i++)
    {
        ll sub;
        sub = min(((m[i] - m[i - 1]) * a), b);
        f = f - sub;
    }

    if (f <= 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return;
}

int main()
{
    speed;
    ll t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
