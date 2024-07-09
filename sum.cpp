 #include<bits/stdc++.h>
    #include <iostream>
    #define ll long long
    #define  speed ios_base::sync_with_stdio(0),cin.tie(0), cout.tie(0);
    // #define  ff(i,x,y) for(ll i=x;i<y;i++)
    //#define  fb(i,x,y)  for(ll i=x;i=+y;i--)
    using namespace std;
    void solve()
    {
        int a[3];
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }
        
        if(a[0]+a[1]==a[2]){
            cout<<"+"<<endl;
        }
        else 
        {cout<<"-"<<endl;}
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
        
    
    }