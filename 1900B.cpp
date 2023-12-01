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
        ll t;
        cin>>t;
        while(t--)
        {
            int a[3];
            for(int i=0;i<3;i++)
            {
                cin>>a[i];
                a[i]=a[i]%2;
            }
            if(a[0]==a[1] &&a[1]==a[2])
            {
                cout<<1<<" "<<1<<" "<<1<<endl;
                
            }
            else if (a[0]==a[1] && a[1]!=a[2])
            {
                cout<<0<<" "<<0<<" "<<1<<endl;
                
            }
            else if (a[1]==a[2] && a[1]!=a[0])
            {
                cout<<1<<" "<<0<<" "<<0<<endl;
                
            }
            else{
                  cout<<0<<" "<<1<<" "<<0<<endl;
                
            }



        }
        
    return 0;
    }