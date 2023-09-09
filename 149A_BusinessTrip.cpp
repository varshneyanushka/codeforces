#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[12];
    for(int i=0;i<12;i++)
    {
        cin>>a[i];
    }
    sort(a,a+12,greater<int>());

    int sum=0;
    int count=0;
    for(int i=0;i<12;i++)
    {
        if(sum<n)
        {
            sum+=a[i];
            count++;
        }
        
    }
    if(sum<n)
    {
        cout<<-1;
    }
    else
      cout<<count<<endl;

}
