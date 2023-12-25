#include<bits/stdc++.h>
    #include <iostream>
    using namespace std;
    #define ll long long
    #define ld long double
    #define pb push_back
    #define  mk make_pair
    #include <cctype>

    #include <string>
    #define  speed ios_base::sync_with_stdio(0),cin.tie(0), cout.tie(0);
    // #define  ff(i,x,y) for(ll i=x;i<y;i++)
    //#define  fb(i,x,y)  for(ll i=x;i=+y;i--)
    using namespace std;
    void solve()
    {
        string s;
        cin>>s;
        int l;

        l=s.length();
        int a[l];
        for(int i=0;i<l;i++)
        {
            if(islower(s[i])==true)
            {
                a[i]=1;
            }
            else{
                a[i]=0;
            }
        }
        for(int i=0;i<l;i++)
        {
            if(s[i]=='b')
            {a[i]=2;
                for(int j=i-1;j>=0;j--)
                {
                    if(a[j]==1)
                    {
                        a[j]=2;
                        
                        break;
                    }
                }
            }
            else if(s[i]=='B')
            {a[i]=2;
                for(int j=i-1;j>=0;j--)
                {
                    if(a[j]==0)
                    {
                        a[j]=2;
                       
                        break;
                    }
                }
            }
            else continue;

        }
          string w ="";
         for(int i=0;i<l;i++)
         {
            if(a[i]==1 ||a[i]==0)
            {
                w=w+s[i];
            }
         }
         cout<<w<<endl;
       


         

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