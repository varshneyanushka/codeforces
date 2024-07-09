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
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        arr.push_back(t);

    }
    
    for(int i=0;i<n;i++)
    {
        sum=sum+abs(arr[i]);
    }
    cout<<sum<<endl;


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
