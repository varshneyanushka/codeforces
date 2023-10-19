#include<bits/stdc++.h>
    #include <iostream>
    #include <string> 
    using namespace std;

    void solve()
    {
        int n,m;
            cin>>n>>m;
            string x,s;
            cin>>x;
            cin>>s;
            int pt=0;
         
           
            while(m--)
            {
                if(x.find(s)<=x.length())
                {
                   cout<<pt<<endl;
                   return ;
                }
                x.append(x);
              
                pt++;
                
            }
            cout<<-1<<endl;
            return;
    }
    using namespace std;
    int main()
    {   
        int t;
        cin>>t;
        while(t--)
        {
            solve();

        }
    
    }