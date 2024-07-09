#include <bits/stdc++.h>
#include <iostream>
#define ll long long
#define speed ios_base::sync_with_stdio(0),cin.tie(0), cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s, f;
    cin >> s >> f;
    int days=0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] != f[i])
        {
            bool swaped = false;
            for (int j = i + 1; j < n; j++)  
            {
                if (s[i] != s[j] && f[i] != f[j])
                {
                    swap(s[i], s[j]);
                    swaped = true;
                    days++;
                    break;
                }
            }
            if (!swaped)
            {
                if (s[i] == '0')
                {
                    s[i] = '1';

                }
                else
                {
                    s[i] = '0';
                }
                days++;
            }
        }
    }
    cout<<days<<endl;
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
