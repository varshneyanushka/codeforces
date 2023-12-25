    #include<bits/stdc++.h>
    #include <iostream>
    #define ll long long
    using namespace std;
    #define  speed ios_base::sync_with_stdio(0),cin.tie(0), cout.tie(0);
    #define  ff(i,x,y) for(ll i=x;i<y;i++)
    //#define  fb(i,x,y)  for(ll i=x;i=+y;i--)
    using namespace std;
    void solve()
    {
        int n,m;
        cin>>n;
        cin>>m;
        int a[m];
        int b[m];
        int c[n];

        ff(i,0,m)
        {
            cin>>a[i];
            cin>>b[i];

        }
        ff(i,0,n)
        {
            cin>>c[i];

        }
               
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