#include<bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;

void solve() {
    int n,k,q;
    cin>>n>>k>>q;
    int a[k];
    for(int i=0;i<k;i++)
    {
        cin>>a[i];
    }
    int b[k];
    for(int i=0;i<k;i++)
    {
        cin>>b[i];
    }
    int c[k];
    c[0]=a[0]/b[0];
    for(int i=1;i<k;i++)
    {
        c[i]=(a[i]-a[i-1])/(b[i]-b[i-1]);
    }

    while (q--) {
        int d;
        cin >> d;
        int ans;
        if (k == 1) {
            cout << d / c[0] << endl;
        } else {
            for(int i=0;i<k-1;i++)
                    {
                        if(d>a[i])
                        {
                            ans=b[i]+ (d-a[i+1])/(c[i]);
                            break;
                        }
                        else{
                            ans=b[i];

                        }
                    }
            cout << ans << endl;
        }
    }


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