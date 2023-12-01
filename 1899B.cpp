#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
#define ll long long
#define ld long double
// #define pb push_back
#define mk make_pair
#define speed ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
// #define  ff(i,x,y) for(ll i=x;i<y;i++)
// #define  fb(i,x,y)  for(ll i=x;i=+y;i--)
using namespace std;
void solve()
{
     int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> div;
        for (int i = 2; i <= n; ++i)
        {
            if (n % i == 0)
            {
                div.push_back(i);
            }
        }

        int diff = 0;
        int final=0;

        for (int num : div)

        {
            int sum = 0;
            vector<int> curr;
            int j = 0;
            while (j < n)
            {
                for (int i = j; i < num + j; i++)

                {
                    sum = sum + a[i];
                    cout<<"sum"<<sum<<endl;
                }
                
                curr.push_back(sum);
                sort(curr.begin(), curr.end());
                int x=n/num;
                cout<<num<<endl;
                
                diff = curr[0] - curr[x];
                cout<<"DIFF"<<diff<<endl;
                j = j + num;
               final=max(final,diff);

            }
            
            
            
        }
        cout<<final<<endl;
        return;
}
int main()
{
    speed;
    ll t;
    cin >> t;
    while(t--)
    {
       solve();
       


    }
}