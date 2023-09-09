#include <iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   int maxi=0;
   int mini=0;
   cout<<a[1]-a[0]<<endl;
   cout<<a[n-1]-a[0]<<endl;
   for(int i=1;i<n;i++)
   {
     int x=a[i]-a[i-1];
     int y=a[i+1]-a[i];
     int z=a[n-1]-a[i];
     int w=a[i]-a[0];
   
     if(i==n-1)
     {
      mini=a[n-1]-a[n-2];
     }
     else
     {
     mini=min(x,y);
     }
     maxi=max(z,w);
     cout<<mini<<endl;
     cout<<maxi<<endl;

   }

}
