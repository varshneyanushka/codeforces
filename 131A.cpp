#include<bits/stdc++.h>
    #include <iostream>
    using namespace std;
    #define ll long long
    #define ld long double
    #define pb push_back
    #define  mk make_pair
    #define  speed ios_base::sync_with_stdio(0),cin.tie(0), cout.tie(0);
    #define  ff(i,x,y) for(ll i=x;i<y;i++)
    //#define  fb(i,x,y)  for(ll i=x;i=+y;i--)
    using namespace std;
    int main()
    {   speed;
        string s2;
        cin>>s2;
        string s1=s2;

        transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 
        
        ff(i,1,s2.length())
        {
            if(s1[i]==s2[i])
            {
                cout<<s1<<endl;
                
                
                return 0;
            }
        }
        if(s1[0]==s2[0])
        {
            s2[0]=toupper(s2[0]);
             cout<<s2<<endl;
        }
        else{

             cout<<s2<<endl;

        }
       
    }