#include <bits/stdc++.h>
#include<iostream>

using namespace std;
void solve()
{
    int n;
        cin>>n;
        int a[n];
        int b[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            
           
        }
        if(a[0]==1)
        {
            b[0]=2;

        }
        else{
            b[0]=1;
        }
        

     
        for(int i=1;i<n;i++)
        {
            b[i]=b[i-1]+1;
            
        }
        for(int i=1;i<n;i++)
        {
            if(a[i]==b[i])
            {
                for(int j=i;j<n;j++)
                {
                    b[j]++;
                }

            }
            
        }
      
        cout<<b[n-1]<<endl;

        return;
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
