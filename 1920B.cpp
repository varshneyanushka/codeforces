 #include<bits/stdc++.h>
    #include <iostream>
    #define ll long long
    #define  speed ios_base::sync_with_stdio(0),cin.tie(0), cout.tie(0);
    // #define  ff(i,x,y) for(ll i=x;i<y;i++)
    //#define  fb(i,x,y)  for(ll i=x;i=+y;i--)
    using namespace std;
    void solve()
    {
        ll n,k,x;
        cin>>n>>k>>x;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll alice=0;
        ll bob=0;
        for(int i=n-1;i>=n-k;i--)
        {
            alice=alice+a[i];
        }
        for(int i=n-k-1;i>=n-k-x;i--)
        {
            bob=bob+a[i];
        }
        cout<<alice-bob<<endl;



        return;
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