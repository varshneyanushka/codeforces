#include<bits/stdc++.h>
    #include <iostream>
    #include <cmath>
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
        int n;
        cin>>n;
        int q=n;
        float P;
        cin>>P;
        float l;
        cin>>l;
        float t;
        cin>>t;
        int z ;//num of task
        z=(n/7)+1;
        //cout<<"z"<<z<<endl;
        int d=ceil(static_cast<float>(z) / 2.0);//days
        //cout<<"d:"<<d<<endl;
        n=n-d;
        int curr;
        curr= t*z + l*d;
       // cout<<"curr:"<<curr<<endl;
        if(P<=curr)
        {
             int crr=0;
            int k=0;
            
            if(z%2==0)

            {
               
                while(P>=crr)
            {
                
                crr=crr + t*2 +l;
                k++;
            }
                n=q-k;;
            }
            else
            {
                
                while(P>=crr)
            {
                
                crr=crr + t*2 +l;
                k++;
            }
                n=q-k-1;;
            }
         //   cout<<k;
            
        //    cout<<"cunbvjhvrr:"<<endl;
            
        }
        
        else
        {
            int w;
            w=floor(float((P-curr)/l));
        //    cout<<"w:"<<w<<endl;
            n=n-w;
        }
        cout<<n<<endl;
            return;




    }
    int main()
    {   speed;
        ll tc;
        cin>>tc;
        while(tc--)
        {
            solve();
        }
        
    
    }