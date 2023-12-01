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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n==1)
        {
            cout<<a[0];
            return ;
        }
        int ptr=0;
        int sum=INT_MIN;
        int curr=0;
        while(ptr<n)
        { 
            for(int i=ptr;i<n;i++)
            {curr=a[i];
                if(a[i]%2==0 && a[i+1]%2==0)
                {
                    ptr++;
                   
                }
                else if(a[i]%2!=0 && a[i+1]%2!=0)
                {
                    cout<<":"<<i;
                    ptr++;
                    
                }
                else
                {
                    cout<<"hi"<<i<<endl;
                    curr=curr+a[i+1];
                    ptr++;
                }

                
            }
            sum=max(sum,curr);
        }
        sort(a,a+n);
        sum=max(sum,a[n-1]);
        cout<<sum<<endl;
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