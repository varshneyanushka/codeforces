#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define mk make_pair
#define speed ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
// #define  ff(i,x,y) for(ll i=x;i<y;i++)
// #define  fb(i,x,y)  for(ll i=x;i=+y;i--)
using namespace std;
int main()
{
    speed;
    ll t;
    cin >> t;
    while (t--)
        ;
    {
        int n;
        cin >> n;
        int a[n];
        int b[3];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)

            {
                for (int k = i + 2; k < n; k++)
                {
                    b[0]=a[i];
                    b[1]=a[j];
                    b[2]=a[k];
                    sort(b,b+3);
                    int x;
                    x=__gcd(b[0],b[1]);
                    


                }
            }
        }
    }
}  