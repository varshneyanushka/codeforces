#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int b[n];
        int c[n];
        int x=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            c[i]=x+1;
            x++;
            b[i]=a[i]-c[i];
        }
        for(int i=n-1;i>=0;i--)
        {   
            if(b[i]==b[i-1])
            {
                swap(c[i],c[i-1]);
                b[i]=a[i]-c[i];
                b[i-1]=a[i-1]-c[i-1];
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<b[i];
            cout<<endl;
            cout<<"c";
            cout<<c[i];
        }
    }
}
