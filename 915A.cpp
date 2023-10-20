#include<bits/stdc++.h>
    #include <iostream>
    using namespace std;
    #define ll long long
    #define ld long double
    #define pb push_back
    #define  mk make_pair
    #define  speed ios_base::sync_with_stdio(0),cin.tie(0), cout.tie(0);
    #define  ff(i,x,y) for(ll i=x;i<y;i++)
    #define  fb(i,x,y)  for(ll i=x;i>=y;i--)
    using namespace std;
    int main()
    {   speed;
        ll n,k;
        cin>>n>>k;
        int a[n];
        ff(i,0,n)
        {
            cin>>a[i];
        }
        int maxi={INT_MAX};
        ff(i,0,n)
        {
            if(k%a[i]==0)
            {
                int curr=k/a[i];
                maxi=min(maxi,curr);

            }
        }
        cout<<maxi<<endl;
    
    }
    