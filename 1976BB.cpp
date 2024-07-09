#include <bits/stdc++.h>
#include <iostream>
#include <limits> 
#define ll long long
#define no() cout << "NO" << endl;
#define yes() cout << "YES" << endl;
using namespace std;

void solve() {
    int n;
    cin >> n;
    int c=0;
    vector<ll > a(n);
    vector<ll > b(n+1);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n+1; i++) 
    {
        cin >> b[i];
    }

    ll mindiff=INT_MAX;
    
    vector<ll > diff(n);

    for (int i = 0; i < n; i++) 
    {
       diff[i]=(b[n]-a[i]);
    }
   
    
     vector<ll > r(n);
    for (int i = 0; i < n; i++) 
    {
        r[i]=(b[i]-a[i]);
       
        c=c+ abs(b[i]-a[i]);
    }
    
  
    
    for (int i = 0; i < n; i++) 
    {
        
        if((r[i]*diff[i])>=0  ) 
        {
            if(abs(diff[i])<=abs(r[i]))
            {
                 mindiff=1;

            break;
            }
            else{
                mindiff=abs(diff[i]-r[i])+1;
            }
         
           
        }
        else
        {
           // cout<<diff[i];
             mindiff=min(mindiff,abs(diff[i])) +1;
          //   cout<<mindiff;


        }
    }
   
    c+=abs(mindiff);
   
    cout<<c<<endl;
    return;




    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}