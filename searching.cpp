#include<bits/stdc++.h>
    #include <iostream>
    #define ll long long
    #define  speed ios_base::sync_with_stdio(0),cin.tie(0), cout.tie(0);
    // #define  ff(i,x,y) for(ll i=x;i<y;i++)
    //#define  fb(i,x,y)  for(ll i=x;i=+y;i--)
    using namespace std;
    int main()
    {
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        int x;
        cin>>x;

         for(int i=0;i<n;i++)
         {
            if(a[i]== x)
            {
                cout<<i<<endl;
                return 0 ;
            }
         }
         cout<<-1<<endl;
         return 0;

    }