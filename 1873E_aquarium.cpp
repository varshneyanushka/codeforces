#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int value(int x,int sum,int q)
{
    int h;
    
     return h;
}
void solve()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    int sum=0;
    int h;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    sort(a,a+n);

    int q=n;
    int satisfy=false;
    
    while(satisfy==false)
    {
    if((x+sum)%q==0)
    {
        h=(x+sum)/q;
         for(int i=0;i<n;i++)
         {
            if(h-a[i]<0)
            {
                 q--;
                sum =sum-a[q];
                break;
            }
            else
            {
                satisfy=true;
            }
         }

    }
    else
    {
        q--;
        sum =sum-a[q];

    }
    }
    cout<<h<<endl;
    


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