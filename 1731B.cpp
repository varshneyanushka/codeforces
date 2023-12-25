    #include<bits/stdc++.h>
    #include <iostream>
    using namespace std;
    #define ll long long
    #define ld long double
    #define pb push_back
    #define  mk make_pair
    #define  speed ios_base::sync_with_stdio(0),cin.tie(0), cout.tie(0);
    #define  ff(i,x,y) for(ll i=x;i<y;i++)
    //#define  fb(i,x,y)  for(ll i=x;i=+y;i--)
    using namespace std;
    void solve()
    {
        ll n;
        cin>>n;
        cout<<"n : "<<n<<endl;
        const unsigned int M = 1000000007;
        ll d=0;
        ll i=1;
        ll j=1;
        ff(i,1,n+1)
        {
           d= d +(i*i);
        }
        ff(i,1,n)
        {
           d= d +(i*(i+1));
        }


        
        
        // ff(i,0,n)//rows
        // {
        //     ff(j,0,n)//col 
        //     {
        //         a[i][j]=(i+1)*(j+1);
        //         //cout<<a[i][j];
        //     }
        //    // cout<<endl;
        // }
        // ff(i,0,n-1)//rows
        // {   int p=-1;
        //     ff(j,0,n-1)//col 
        //     {
        //         if(a[i][j+1]>=a[i+1][j] )
        //         {
        //             cout<<"hey"<<endl;
                    
        //             d=d+a[i][j+1];
        //             continue;
        //         }
        //         else
        //         {
        //             p=j;
        //           break;
                
        //         }
        //     }
        //     if(p!=-1)
        //     {
        //         d=d+a[i+1][p];
        //     }
            
        // }
        // d=d + (n*n);
        ll ans =(d*2022)% M;
        cout<<ans<<endl;

    return;


    }
    int main()
    {   speed;
        ll t;
        cin>>t;
        while(t--)
        {
            solve();
        }
        
    return 0;
    }