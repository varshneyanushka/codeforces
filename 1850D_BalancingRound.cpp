#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve ()
{
        int n;
        int k;
        cin>>n>>k;
        

        int a[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n==1)
        {
            cout<<0<<endl;
            return;
        }
        sort(a,a+n);
        int ptr=1;
        int maxi=0;

        for(int i=1;i<n;i++)
        {
            if(a[i]-a[i-1] <=k)
            {
                ptr++;

            }
            else{
                
                
                ptr=1;
            }
            maxi=max(ptr,maxi);
        }
        
       
        
        cout<<n-maxi<<endl;
        
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

       