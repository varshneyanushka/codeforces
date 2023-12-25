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
        string s;
        cin>>s;
        char a[8]={'a','b','c','d','e','f','g','h'};
        char b[8]={'1','2','3','4','5','6','7','8'};

        for(int i=0;i<8;i++)
        {
            if(a[i]==s[0])
            {
                continue;
            }
            else{
                cout<<a[i]<<s[1]<<endl;
            }
        }
        for(int i=0;i<8;i++)
        {
            if(b[i]==s[1])
            {
                continue;
            }
            else{
                cout<<s[0]<<b[i]<<endl;
            }
        }
        return;

    }
    int main()
    {   speed;
        ll t;
        cin>>t;
        {
            while(t--)
            {
                solve();
            }
        
        }
        
    
    }