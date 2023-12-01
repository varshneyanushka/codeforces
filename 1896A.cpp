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
        while(t--)
        {
            int n;
            cin>>n;
            string s;
            cin>>s;
            int r=n%3;
            int A=0;
                int B=0;
            for(int i=0;i<n-r-3;i=i+3)
            {
              cout<<"hi";
                int a;
                    int b;

                for(int j=i;j<i+3;j++)
                { a=0;
                b=0;
                    
                    if(s[j]=='A')
                    {
                        a++;
                    }
                    else{
                        b++;

                    }
                    
                }
                if(a>b)
                {
                    A++;
                }
                else
                {
                    B++;
                }

            }
         
             
                

                for(int j=n-r-3;j<n;j++)
               { int a;
                    int b;
                { a=0;
                b=0;
                    
                    if(s[j]=='A')
                    {
                        a++;
                    }
                    else{
                        b++;

                    }
                    
                }
                if(a>b)
                {
                    A++;
                }
                else
                {
                    B++;
                }
               }
          
          cout<<"A WINS"<<A<<endl;
          cout<<"B WINS"<<B<<endl;

          if(A>B)
          {
            cout<<"A"<<endl;
          }
          else{
            cout<<"B"<<endl;
          }


        }
        return 0;
    
    }