#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
      int n;
        cin>>n;
        if(n<7 || n==9)
        {
            cout<<"NO"<<endl;
            return;
        }
        else if(n==12)
        {
            cout<<"YES"<<endl;
            cout<<1<<endl;
            cout<<4<<endl;
            cout<<7<<endl;
            
            return;
        }

        else if(n%3!=0)
        {
            cout<<"YES"<<endl;
            cout<<1<<endl;
            cout<<2<<endl;
            cout<<n-3<<endl;
           
            return;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<2<<endl;
            cout<<5<<endl;
            cout<<n-7<<endl;
            
            return;
        }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
      
    }
}
