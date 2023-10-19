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
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        a[0]++;
        int pro=1;
        for(int i=0;i<n;i++)
        {

            pro=pro*a[i];
        }
        cout<<pro<<endl;

    }
}