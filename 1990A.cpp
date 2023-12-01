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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0;
        int f=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='.' && s[i+1]=='.')
            {
                c++;
            }
            
            else 
            {
                c=0;
            }
            if(c==2)
            {
                cout<<2<<endl;
                
                return;
            }
            
  
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.')
            {
                f++;
            }
        }
        cout<<f<<endl;
        return;

    }
    int main()
    {   speed;
        ll t;
        cin>>t;
        while(t--)
        { solve();}
    
    }