#include<bits/stdc++.h>
    #include <iostream>
    using namespace std;
    #define ll long long
    #define ld long double
    #define pb push_back
    #define  mk make_pair
    #define  speed ios_base::sync_with_stdio(0),cin.tie(0), cout.tie(0);

    using namespace std;
    void solve()
    {
        int n;
            cin>>n;
            int l=n*2;
            int a[l];
            for(int i=0;i<l;i++)
            {
               cin>>a[i];

            }
            

            sort(a,a+l);
            int left;
            int right;
            left=0;
            right=0;
            for(int i=0;i<n-1;i++)
            {
                left=a[i+1]-a[i]+left;
               // cout<<a[i+1]<<"-"<<a[i]<<endl;
              
            }
            //if(n==2)
            {
               // right=a[l-1]-a[l-2]+right;
            }
        //   else
            {
                for(int i=l-1;i>l/2;i--)
                {
                    right=a[i]-a[i-1]+right;
                   
                 //cout<<a[i]<<"-"<<a[i-1]<<endl;
                
                
                }
            }
            int sum=0;
            sum=left +right;
            cout<<sum<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<a[n*2-1-i]<<" "<<a[i]<<endl;
            }

            return ;

    }
    int main()
    {   speed;
        ll t;
        cin>>t;
         while (t--)
        {
            solve();
        }
    return 0;
    }