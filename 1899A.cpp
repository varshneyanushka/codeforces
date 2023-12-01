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
        while (t--)
        {
            int n;
            cin>>n;
            if(n%3==0)
            {
                cout<<"Second"<<endl;
            }
            else{
                cout<<"First"<<endl;
            }
        }
        return 0;
    
    }