#include<bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
void solve()
{
    int n;
    int m;
    cin>>n>>m;
    int h=0;
    int v=0;
    if(m==1)
    {
        cout<<-n/2<<endl;
        return ;
    }
    else 
    {
        cout<<(m/2)*n<<endl;
        return ;
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
