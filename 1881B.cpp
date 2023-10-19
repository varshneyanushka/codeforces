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
    void solve()
        {
    
            int arr[3];
            for(int i=0;i<3;i++)
            {
                cin>>arr[i];
            }
            sort(arr,arr+3);
            int total;
            int b=0;
            int c=0;
            if(arr[2]%arr[0]==0 && arr[1]%arr[0]==0)
            {
                b=arr[2]/arr[0];
                c=arr[1]/arr[0];
                total = b+c-2;

            }
            else
            {
                cout<<"NO"<<endl;
                return;
            }
            if(total>3)
            {
                  cout<<"NO"<<endl;
                return;

            }else
            {
                  cout<<"YES"<<endl;
                return;
            }


        }

    int main()
    {   speed;
        ll t;
        cin>>t;
        while(t--)
        {
            
          
            solve();


        }
    
    }
