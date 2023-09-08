#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum +=a[i];
    }
    sort(a,a+n,greater<int>());

    int my=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(my<=sum/2)
        {
        my +=a[i];
        count++;
        }
    }
    cout<<count;
    

}   