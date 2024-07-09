#include<bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;

void solve() 
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char,int > c;
    for(int i=0;i<n;i++)
    {
        c[s[i]]++;
    }
   int h=c['W']-c['E'];
   int v=c['N']-c['S'];
   if(abs(h)%2!=0 || abs(v)%2!=0)
   {
    cout<<"NO"<<endl;
    return;
   }
   if(n==2 && (s=="NS"||  s=="SN"|| s=="WE"||s=="EW") )

   {
     cout<<"NO"<<endl;
    return;
    
   }
   int cR=0;
   int cH=0;
   if(h>0)
     {
        for(int i=0;i<n;i++)
        {
            if(s[i]=='E')
            {
               s[i]='R';
               cR++;
                c['E']--;
            }
            if(s[i]=='W')
            {
                if(h>0)
                {
                    s[i]='H';
                    cH++;
                    h--;
                }
                else{
                    s[i]='R';
                    cR++;

                }
            }
        }
     }
     else
     {
        h=abs(h);
         for(int i=0;i<n;i++)
        {
            if(s[i]=='W')
            {
               s[i]='H';
               cR++;
               
            }
            if(s[i]=='E')
            {
                if(h>0)
                {
                    s[i]='R';
                     cH++;
                    h--;
                }
                else{
                    s[i]='H';
                    cR++;
                }
            }
        }
     }

     if(v>0)
     {
        for(int i=0;i<n;i++)
        {
            if(s[i]=='S')
            {
               s[i]='R';
               cR++;
                
            }
            if(s[i]=='N')
            {
                if(v>0)
                {
                    s[i]='H';
                     cH++;
                    v--;
                }
                else{
                    s[i]='R';
                    cR++;
                }
            }
        }
     }

     else{
        v=abs(v);
        for(int i=0;i<n;i++)
        {
            if(s[i]=='N')
            {
               s[i]='H';
               cR++;
                
            }
            if(s[i]=='S')
            {
                if(v>0)
                {
                    s[i]='R';
                     cH++;
                    v--;
                }
                else{
                    s[i]='R';
                    cR++;
                }
            }
        }
     }
    //  if(cR==0 || cH==0)
    //  {
    //     cout<<"NO"<<endl;
    //     return;
    //  }

     cout<<s<<endl;
     return;




}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();

    }
}