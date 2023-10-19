#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int h[n];
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
    }
    
    for(int i=0;i<n-1;i++)
    {
        if(h[i+1]-h[i]==0 || h[i+1]-h[i]==-1)
        {
            h[i+1]++;
            h[i]--;
        }
       
    }
    bool p =false;
    for(int i=0;i<n-1;i++)
    {
        if(h[i+1]>h[i])
        {
            p=true;
        }
        else
        {
            p=false;
            cout<<"NO"<<endl;
            return;
        }
    }
    if (p==true)
    {
        cout<<"YES"<<endl;
    }
    
    
   
    

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}