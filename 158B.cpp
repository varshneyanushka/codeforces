#include<bits/stdc++.h>
    #include <iostream>
    using namespace std;
    #define ll long long
    #define ld long double
    #define pb push_back
    #define  mk make_pair
    #define  speed ios_base::sync_with_stdio(0),cin.tie(0), cout.tie(0);
    //#define  ff(i,x,y) for(ll i=x;i<y;i++)
    //#define  fb(i,x,y)  for(ll i=x;i=+y;i--)
    using namespace std;
    int main()
    {   speed;
        ll t;
        cin>>t;
        int arr[t];
        for(int i=0;i<t;i++)
        {
            cin>>arr[i];
        }
 
        int cab=0;
        sort(arr, arr + t, greater<int>());
        int ptr=0;
        for(int i=0;i<t;i++)
        {
            if(arr[i]==4)
            {
                cab++;
                arr[i]=0;
                ptr=i;
                
            }
        }
        for(int i=ptr;i<t;i++)
        {
            for(int j=i+1;j<t;j++)
            {
                if((arr[i]+arr[j])<=4)
                {
                    arr[j]=arr[i]+arr[j];
                    arr[i]=0;
                    break;
                }
            }
        }
  sort(arr, arr + t, greater<int>());      
  for(int i=0;i<t;i++)
  {
      if(arr[i]!=0)
      {
        cab++;
      }
      else
      {
        break;
      }
      
  }
  
  cout<<cab<<endl;
    return 0;
    }