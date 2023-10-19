#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int ptr=0;
        int curr=0;
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
                curr=i;
                ptr=curr;
                count++;
                break;
            }
            
        }
        
        for(int j=ptr+1;j<n;j++)
        {
            if(s[j]=='B')
            {
                curr=j;
            }
            if(curr-ptr >= k)
            {
                count++;
                ptr=curr;
            }


        }
        cout<<count<<endl;
        
    }
}