 #include<bits/stdc++.h>
    #include <iostream>
    
    #define ll long long
    #define  speed ios_base::sync_with_stdio(0),cin.tie(0), cout.tie(0);
    // #define  ff(i,x,y) for(ll i=x;i<y;i++)
    //#define  fb(i,x,y)  for(ll i=x;i=+y;i--)
    using namespace std;
    void solve()
    {
        ll n;
        cin>>n;
        ll l=0;
        ll h=INT_MAX;
        ll vec[n][2];
        vector<ll> ni;
        for(int i=0;i<n;i++)
        {
          cin>> vec[i][0];
          cin>> vec[i][1];
        }
        for(int i=0;i<n;i++)
        {
            if(vec[i][0]==1)
            {
                l=max(l,vec[i][1]);
            }
            else if(vec[i][0]==2)
            {
                h=min(h,vec[i][1]);
            }
            else{
                ni.push_back(vec[i][1]);
            }
        }

        
        sort(ni.begin(),ni.end());
        int k=0;
        int high,low;

        for(int i=0;i<ni.size();i++)
        {
            if(ni[i]>=l)
            {
                low=i;
                break;
            }
        }
        for(int i=0;i<ni.size();i++)
        {
            if(ni[i]>h)
            {
                high=i-1;
                break;
            }
        }

        k=(l+h-1)-(low+high-1);
        cout<<k<<endl;

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