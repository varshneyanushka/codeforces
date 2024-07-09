#include<bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
void solve()
{
    int n;
    int m;
    cin>>n>>m;
    bool win=true;
    while(n!=0 && m!=0)
    {
        win=!win;
       
        n--;
        m--;
    }
    if(win==true)
    {
        cout<<"Malvika"<<endl;
    }
    else{
        cout<<"Akshat"<<endl;
    }
    return;
}

int main()
{
    // ll t;
    // cin>>t;
    // while(t--)
    // {
        solve();

    // }
}
