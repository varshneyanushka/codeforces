#include <bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;

void solve()
{
string s;
       string dup;
       cin>>s;
       dup=s;
       for(int i=0;i<3;i++)
       {
        for(int j=0;j<3;j++)
        {
             char temp;
            temp=dup[i];
            dup[i]=dup[j];
            dup[j]=temp;
            

            if( dup=="abc")
            {
                cout<<"YES"<<endl;
                return;
            }
            else{
                dup=s;
            }
        }

       }
       cout<<"NO"<<endl;
       return;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       solve();
       


    }
    
}