#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];
    
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    int curr=INT_MAX;
    sort(a,a+m);
    for(int i=n-1;i<m;i++)
    {
      curr=min(curr,(a[i]-a[i-n+1]));
    }
    
    cout<<curr<<endl;
    return 0;
}
