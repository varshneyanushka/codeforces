#include <bits/stdc++.h>
 #include <iostream>
//#include <chrono>
#define ll long long
using namespace std;
//using namespace chrono;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), temp(n), f(n);
 //auto start = high_resolution_clock::now();

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        temp[i] = a[i];
    }

    sort(temp.begin(), temp.end());

    unordered_map<ll, ll> tempIndex;

    for (ll i = 0; i < n; i++)
    {
        tempIndex[temp[i]] = i;
    }

   
    for (ll i = 0; i < n; i++)
    {
        ll score = 0;
        ll r = 0;
        f[i] = 0;

        for (ll j = 0; j < i + 1; j++)
        {
            score = score + temp[j];
        }

        r = r + i;

        for (ll j = i + 1; j < n; j++)
        {
            if (score >= temp[j])
            {
                score = score + temp[j];
                r++;
            }
            else
            {
                break;
            }
        }
        f[i] = r;
    }

   // auto stop = high_resolution_clock::now();
   // auto duration = duration_cast<milliseconds>(stop - start);

    for (ll i = 0; i < n; i++)
    {
        cout << f[tempIndex[a[i]]] << endl;
    }

   // cout << "Time taken for this test case: " << duration.count()/1000.0 << " microseconds" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
