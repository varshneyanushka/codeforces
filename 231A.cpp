#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int count=0;
    while(t>0)
    {
        int a[3];
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }
        int ptr=0;
         for(int i=0;i<3;i++)
         {
            if(a[i]==1)
            {
                ptr++;
            }

         }
         if(ptr>=2)
         {
            count++;
         }
        t--;
    }
    cout<<count;
    return 0;
}