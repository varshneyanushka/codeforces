    #include<bits/stdc++.h>
    #include <iostream>
    using namespace std;
    #define ll long long
    #define ld long double
    #define pb push_back
    #define  mk make_pair
    #define  speed ios_base::sync_with_stdio(0),cin.tie(0), cout.tie(0);
     #define  ff(i,x,y) for(ll i=x;i<y;i++)
    //#define  fb(i,x,y)  for(ll i=x;i=+y;i--)
    using namespace std;
    void solve()
    {
        ll n;
        cin>>n;
        ll a[n];
        ll x=1;

        ff(i,0,n)
        {
            cin>>a[i];
            x=x*a[i];
        }
        x=x+n-1;
        x=x*2022;
        cout<<x<<endl;


    }
    int main()
    {   speed;
        ll t;
        cin>>t;
        while(t--)
        {
            solve();
        }
        
    
    }