#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#define ll long long
using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> a;
    for(ll i=0;i<n;i++)
    {
        int t;
        cin>>t;
        a.push_back(t);


    }
    
    int ans=0;
    int sum=0;
    while(k>0)
    {
            for(ll i=0;i<(n/2);i++)
        {
            if(a[i]+a[n-i-1]<=k && (a[i]!=-1 && a[n-i-1]!=-1))
            {
                ans+=2;
                 k=k-a[i]-a[n-i-1];
                 a[i]=-1; a[n-i-1]=-1;
                
                break;
            }
                if(i==(n/2)-1){
                     cout<<"ans:  "<<ans<<endl;
                     return;
                }
        }


   
       for(ll i=0;i<(n/2);i++)
        {
            if(a[n-i-1]<=k && a[i]!=-1)
            {
                ans+=1;
                 k=k-a[n-i-1];
                a[i]=-1;
                break;
            }
            if(i==(n/2)-1){
                     cout<<"ans:  "<<ans<<endl;
                     return;
                }

        }
    
    }
    
        

    cout<<"ans:  "<<ans<<endl;
    return;

}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();

    }
}