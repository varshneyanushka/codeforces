#include<bits/stdc++.h>
#include <iostream>
#define ll long long
#define speed ios_base::sync_with_stdio(0),cin.tie(0), cout.tie(0)
// #define ff(i,x,y) for(ll i=x;i<y;i++)
//#define fb(i,x,y)  for(ll i=x;i=+y;i--)
using namespace std;

int main()
{   
    speed;
    ll t;
    cin >> t;
    while(t--)
    {
        ll arr[4][2];
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i][0] >> arr[i][1];
        }
        ll side;
        for (int i = 1; i < 4; i++)
        {
            if(arr[0][0] == arr[i][0])
            {
                side = arr[0][1] - arr[i][1];
            }
        }
        side = side * side;
        cout << side << endl;
    }

    return 0;
}
