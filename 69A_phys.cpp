#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> a;
    for(int i=0;i<n*3;i++)
    {
        int t;
        cin>>t;
        a.push_back(t);
    }
    int x=0;
    int y=0;
    int z=0;

    for(int i=0;i<n*3;i=i+3)
    {
        x=a[i]+x;

    }
     for(int i=1;i<n*3;i=i+3)
    {
        y=a[i]+y;
        
    }
     for(int i=2;i<n*3;i=i+3)
    {
        z=a[i]+z;
        
    }
    if(x==0 && y==0 && z==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }



}
