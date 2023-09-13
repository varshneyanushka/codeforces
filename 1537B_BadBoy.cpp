#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,m,i,j;
        cin>>n>>m>>i>>j;
       int x1,x2,y1,y2;
       if((n-i)>=n/2)
       {
        x1=n;
       }
       else
       {
        x1=1;
       }
       if((m-j)>=m/2)
       {
        y1=m;
       }
       else
       {
        y1=1;
       }

       if((n-x1)>=n/2)
       {
        x2=n;
       }
       else
       {
        x2=1;
       }
       if((m-y1)>=m/2)
       {
        y2=m;
       }
       else
       {
        y2=1;
       }

       cout<<x1<<endl;
       cout<<y1<<endl;
       cout<<x2<<endl;
       cout<<y2<<endl;
    }
}
