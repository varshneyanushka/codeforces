#include<bits/stdc++.h>
#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

void solve() {
    ll a,b,c,d;
    cin>>a>>b>>c>>d;

    vector<ll> points;
    points.push_back(a);
    points.push_back(b);
    points.push_back(c);
    points.push_back(d);
   
    vector<ll> temp2= points;
    vector<ll> temp1= points;
    
    
    sort(temp1.begin(), temp1.end());
    sort(temp2.begin(), temp2.end(),greater<int>());


    if(temp1==points)
    {
         cout<<"NO"<<endl;
         return;
    }
    if(temp2==points)
    {
         cout<<"NO"<<endl;
         return;
    }




    if(a>b)
    {
        swap(a,b);
    }
    if(c>d)
    {
        swap(c,d);
    }

if( (a<c && c<b)  || (a<d && d<b))
{
    cout<<"YES"<<endl;

}
else if( (c<b && b<d)  || (c<a && a<d))
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
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