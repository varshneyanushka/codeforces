#include<bits/stdc++.h>
#define ll long long
    #include <iostream>
    #define  speed ios_base::sync_with_stdio(0),cin.tie(0), cout.tie(0);
    #define  ff(i,x,y) for(ll i=x;i<y;i++)
    //#define  fb(i,x,y)  for(ll i=x;i=+y;i--)
    using namespace std;
    void solve()
    {
        ll n;
        cin>>n;
        ll a[n];
        ll temp[n];

        ff(i,0,n)
        {
            cin>>a[i];
            temp[i]=a[i];

        }
        sort(temp,temp+n);
        ll f[n];
        ff(i,0,n)
        {
            ll score=0;
            ll r=0;
            f[i]=0;

            ff(j,0,i+1)
            {
                score=score+temp[j];
            }
            r=r+i;
            ff(j,i+1,n)
            {
                if(score>=temp[j])
                    {
                        score=score+temp[j];
                        
                        r++;
                        

                    }
                else{
                        break;
                    }
            }
            f[i]=r +1;
            

            
        }
        int arr[n];
        ff(i,0,n)
        {
            ff(j,0,n)
            {
                if(a[i]==temp[j])
                {
                    arr[i]=f[j];
                }
            }
        }
        ff(i,0,n)
        {
            cout<<arr[i]<<endl;
        }

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