#include<bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;

void solve() {
 int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int ans=0;
    for (int i = 0; i <= n - 3; ++i) 
    {
        if (a[i] == a[i + 1] && a[i] == a[i + 2]) 
        {
            
            if (i == 0 )
            {
                if(i+3==n)
                {

                }
                else if( a[i]!=a[i+3])
                {
                    ans++;
                }
                else{

                }
            } 
            else
            {
                if(a[i-1]!=a[i])
                {
                    ans++;
                }
                if( i+3==n)
                {

                }
                else if( a[i]!=a[i+3])
                {
                    ans++;
                }
                else{

                }
            }
            }
        }
        cout<<ans<<endl;
    }





//     int n;cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     vector<int > b;
//     vector<int > c;
//     int ans=0;
    
//     for(int i=0;i<n-2;i++)
//     {
//         b.push_back(a[i]);
//         b.push_back(a[i+1]);
//         b.push_back(a[i+2]);

//         for(int j=i+1;j<n-2;j++)
//         {
//             c.push_back(a[j]);
//             c.push_back(a[j+1]);
//             c.push_back(a[j+2]);

//             if(b[0]!=c[0] && b[1]==c[1] && b[2]==c[2])
//             {
//                 ans++;
               
//             }
//             else if(b[0]==c[0] && b[1]!=c[1] && b[2]==c[2])
//             {
//                 ans++;
//             }
//             else if( b[0]==c[0] && b[1]==c[1] && b[2]!=c[2])
//             {
//                 ans++;
//             }
//             else{

//             }
//             c.clear();
//         }
//         b.clear();
        

//     }
//   cout<<ans<<endl;


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();

    }
}