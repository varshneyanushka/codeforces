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
        int d[n];
        int ptr=0;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            
        }
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                count++;

            }

        }
        if(count==n-1)
        {
            cout<<-1;
            break;
        }
       
        int pt=0;

        for(int i=1;i<n-1;i++)
        {
           if(a[i]<a[i+1] && a[i]<a[i-1])
           {
            if(a[i+1]>a[i-1])
            {
                pt=i+1;
                break;            
            }
            else
            {
                pt=i-1;
                break;
            }


           }

        }
        cout<<pt+1;
        
        

    }
}
