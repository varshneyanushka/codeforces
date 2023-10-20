 #include<bits/stdc++.h>
    #include <iostream>
    using namespace std;
    #define ll long long
    #define ld long double
    #define pb push_back
    #define  mk make_pair
    #define  speed ios_base::sync_with_stdio(0),cin.tie(0), cout.tie(0);
    // #define  ff(i,x,y) for(ll i=x;i<y;i++)
    //#define  fb(i,x,y)  for(ll i=x;i<=y;i--)
    using namespace std;
    int main()
    {   speed;
        ll n;
        cin>>n;
        int a[n];
        a[0]=0;
        vector <int> f;
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
        }
        int j=n;
        f.pb(j);
        for(int i=j;i>0;--i)
        {
            j=a[i-1];
            if (j==1)
            {
               break;
            }
            f.pb(j);
            
            
        }
       for(int i=0;i<n;i++)
        {
            cout<<f[i];
        }
    
    }
    