#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        char a[10][10];
        for(int i=0;i<10;i++)
       {
            for(int j=0;j<10;j++)
            {
                cin>>a[i][j];

            }
       }
       int points=0;
       int ptr=1;
       for(int i=0;i<10;i++)
       {
        int shots=0;
        
            for(int j=0;j<10;j++)
            {
                if(a[i][j]=='X')
                {
                    shots++;
                }




            }
            if(ptr<5)
            {
            points=points+(shots*(ptr));
            }
            else
            {
                points=points+(shots*(10-ptr));
            }
            ptr++;
       }
       cout<<points<<endl;
        
    }
}