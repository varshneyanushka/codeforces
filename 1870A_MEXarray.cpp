#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solve()
{
    int n,k,x;
    cin>>n>>k>>x;
    if(k>x+1)
    {
        cout<<-1<<endl;
        return;

    }
    if(k>n)
    {cout<<-1<<endl;
        return;}
    vector <int> arr;
    int ptr=0;
    int w;
    w=k;
    for(int i=0;i<n;i++)
    {
        while(w>0)
        {
            arr.push_back(w-1);
            w=w-1;
            ptr++;

        }
    }
   

     for(int i=ptr;i<n;i++)
     {
       if(x==k)
        {
            arr.push_back(x-1);
        }
        else{
            arr.push_back(x);
         }

     }
    
     int sum=0;
     for(int i=0;i<n;i++)
     {
       sum=sum+arr[i];
       

     }
    
     cout<<sum<<endl;
    



}
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        solve();
    }
}
