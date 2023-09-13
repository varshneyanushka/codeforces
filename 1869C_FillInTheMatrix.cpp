#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<random>


using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int m;
        cin>>n;
        cin>>m;
        int a[n][m];
        int w[m];
        int ptr=0;
        for(int j=0;j<m;j++)
        {
            w[j]=ptr;
            ptr++;
        }


        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                a[i][j]=w[j];
                
            }
            
            unsigned seed = 0;
            shuffle(w, w + m,
            default_random_engine(seed));
            
        }

        int v[m];
         for(int j=0;j<m;j++)
        {
           for(int i=0;i<n;i++)
            {
             
                int test[n];
                test[i]=a[i][j];
                sort(test,test+n);
                
                if(a[i][j]==0)
                {
                    if(test[i+1]-test[i]>1)
                    {
                      v[i]=i+1;
                      break;
                    }
                    if(i==n-1)
                    {
                      v[i]=m;
                      break;
                    }
                    break;
                }
                else
                {
                    v[j]=0;
                }
            }
        }
      for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        for(int j=0;j<m;j++)
        {
            cout<<v[j]<<endl;
        }
        int s;
        for(int j=0;j<m;j++)
        {
            if(v[j]==0)
            {
                s=m;
                break;
            }
            else{
                s=0;
            }
        }
        cout<<s<<endl;



    }
}