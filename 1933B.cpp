#include<bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
void solve()
{
   int n;
    cin>>n;
    vector<int> arr;
    int sum=0;
    int moves=0;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        t=t%3;
        arr.push_back(t);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+(arr[i]);
    }
    if(sum%3==0)
    {
        cout<<0<<endl;
    }
    else if(sum%3==1)
    {
         cout<<2<<endl;
    }
    else
    {
         cout<<1<<endl;
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
