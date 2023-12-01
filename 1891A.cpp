#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define mk make_pair
#define speed ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ff(i, x, y) for (ll i = x; i < y; i++)
// #define  fb(i,x,y)  for(ll i=x;i=+y;i--)
using namespace std;
int solve()
{

    ll n;
    cin >> n;
    ll a[n];
    ff(i, 0, n)
    {
        cin >> a[i];
    }
    ll flag = 0;
    ff(i, 0, n - 1)
    {
        if (a[i] > a[i + 1])
        {
            ll k = i + 1;
            while (k % 2 == 0)
            {
                k= k/2;
            }
            if (k != 1)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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