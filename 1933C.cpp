#include<bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int countDivisors(int n) 
{ 
    int cnt = 0; 
    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            // If divisors are equal, 
            // count only one 
            if (n / i == i) 
                cnt++; 
  
            else // Otherwise count both 
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
} 
void solve()
{
     long long a,b,l;
     cin>>a>>b>>l;
     int k;
     int d= countDivisors(l); 
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
