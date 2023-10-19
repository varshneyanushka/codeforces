#include<bits/stdc++.h>
    #include <iostream>
    using namespace std;
    #define ll long long
    #define ld long double
    #define pb push_back
    #define  mk make_pair
    #define  speed ios_base::sync_with_stdio(0),cin.tie(0), cout.tie(0);
   #define  ff(i,x,y) for(ll i=x;i<y;i++)
    #define  fb(i,x,y)  for(ll i=x;i=+y;i--)
    using namespace std;
    int main()
    {   speed;
        ll n,k;
        cin>>n>>k;
        char a[n];
        

        ff(i,0,n)
        {
            cin>>a[i];
            
        }
        ff(i,0,n)
        {

         if(k==1 && a[i]=='#')
         {
            cout<<"NO"<<endl;
            return 0;

         }
         

        }
        int maxi=0;
        int pt=0;
      ff(i,0,n-1)
      {
        
        if(a[i]=='#'  )
        {
           pt++;
        }
        else{
          pt=0;
        }
        maxi=max(maxi,pt);

      }

      if(maxi>=k)
      {
        cout<<"NO"<<endl;
            return 0;
      }
      else
      {
        cout<<"YES"<<endl;
        return 0;
      }
    }
    