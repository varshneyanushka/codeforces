#include<bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
void solve()
{
   int n;
        cin>>n;
        string a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        if(a==c || b==c)
        {
            cout<<"NO"<<endl;
            return  ;
        }
        if(n==1)
        {
            cout<<"YES"<<endl;
            return  ;
        }
        for(int i=0;i<n;i++)
        {
            if(c[i]==a[i] || c[i]==b[i])
            {
                continue;
            }
            else{
                cout<<"YES"<<endl;
            return  ;
            }
        }
        cout<<"NO"<<endl;
            return  ;

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