#include<bits/stdc++.h>
#include <iostream>
    using namespace std;
    #define ll long long
    #define ld long double
    #define pb push_back
    #define  mk make_pair
    #define  speed ios_base::sync_with_stdio(0),cin.tie(0), cout.tie(0);
   // #define  ff(i,x,y) for(ll i=x;i<y;i++)
    //#define  fb(i,x,y)  for(ll i=x;i=+y;i--)
    using namespace std;
    int main()
    {   speed;
        ll n,k;
        cin>>n>>k;
        vector <char> a;
       for(ll i=0;i<n;i++)
        {
            char t;
            cin>>t;
            a.pb(t);
        }
       
        
        int mid=n/2;
        while(k<=mid && k>1)
            {
              cout<<"LEFT"<<endl;
              k--;
            }
        while(k>mid && k<n){
                cout<<"RIGHT"<<endl;
                k++;
             
            }
            

        
        if(k==1)
        {
            for(ll i=0;i<n-1;i++)
            {
                
                cout<<"PRINT"<<" "<<a[i]<<endl;
                cout<<"RIGHT"<<endl;
                

            }
            cout<<"PRINT"<<" "<<a[n-1]<<endl;

        }
        else
        {
           for(ll i=n-1;i>0;i--)
            {
               
                cout<<"PRINT"<<" "<<a[i]<<endl;
                 cout<<"LEFT"<<endl;

            }
             cout<<"PRINT"<<" "<<a[0]<<endl;

        }
        
    
    }
    