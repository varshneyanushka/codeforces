#include<bits/stdc++.h>
    #include <iostream>
    using namespace std;
    #define ll long long
    #define ld long double
    #define pb push_back
    #define  mk make_pair
    #define  speed ios_base::sync_with_stdio(0),cin.tie(0), cout.tie(0);
    // #define  ff(i,x,y) for(ll i=x;i<y;i++)
    //#define  fb(i,x,y)  for(ll i=x;i=+y;i--)
    using namespace std;
    void solve()
    {
        int x,y,k;
        cin>>x>>y>>k;
        if(x>y)
        {
        cout<<x<<endl;
        return;
        }
        if(y>x && (y-x)<=k)
        {
            cout<<y<<endl;
            return;
        }
        else{
            cout<<(y*2 -x-k)<<endl;
            
        }



    }
    int main()
    {   speed;
        ll t;
        cin>>t;
        while (t--)
        {
            solve();
            
        }

    
    }