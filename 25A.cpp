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
        ll n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int t=0,f =0;


        bool nature[n];
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                nature[i]=true;
                t++;
            }
            else
            {
                 nature[i]=false;
                 f++;
            }
        }
        if(f==1)
        {
            for(int i=0;i<n;i++)
            {
                if(nature[i]==false)
                {
                    cout<<i+1<<endl;
                    return 0;
                }
            }
        }
        else{
            for(int i=0;i<n;i++)
            {
                if(nature[i]==true)
                {
                    cout<<i+1<<endl;
                    return 0;
                }
            }
        }
        return 0;


    
    }