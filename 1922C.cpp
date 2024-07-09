#include<bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
void ans(int n,vector <int >a)
{
   ll x;
   cin>>x;
   x=x-1;
   ll y;
   cin>>y;
   y=y-1;
   int coins=0;
   if(x>y)
   {
    for(int i=x;i>=y;i--)
   {
    if((a[i]-a[i-1])<(a[i+1]-a[i]) || i==n-1)
    {
       coins++;
       

    }
    else 
    {
       
     coins=coins-a[i-1]+a[i];
    }
    
   }
   }
   
   for(int i=x;i<y;i++)
   {
    if((a[i]-a[i-1])>(a[i+1]-a[i]) || i==0)
    {
       coins++;
    

    }
    else 
    {
       
     coins=coins+ a[i+1]-a[i];
    }
    
   }
   

  
   cout<<coins<<endl;
   
return;

}
void solve()
{
    ll n;
    cin >> n;
    vector<int> a(n); // Fix: declare a vector of size n

    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; // Fix: access valid index i
    }

    int m;
    cin >> m;
    while (m--)
    {
        ans(n,a);
    }

    return;
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