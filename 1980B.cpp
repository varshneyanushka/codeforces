#include <bits/stdc++.h>
#include <iostream>
#define ll long long
#define no() cout << "NO" << endl;
#define yes() cout << "YES" << endl;
using namespace std;

void solve() {
    ll n;
    cin >> n;
    int a[n];
    int f,k;
    cin>>f>>k;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    if(n==k)
    {
        yes();
        return ;
    }
    
    sort(a,a+n,greater<int>());
    bool flag=false;
    int p=-1;
    for(int i=0;i<k;i++)
    {
        if(a[i]==f)
        {
            flag=true;
            p=i;
            break;
        }
    }
    if( flag==true)
    {
       if(a[k+1]==f )
       {
        cout<<"MAYBE"<<endl;
        return;
       }
       else{
        yes();
        return;
       }

    }


    no();
    return;
    
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}