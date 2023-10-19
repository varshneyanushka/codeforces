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
    int curr=0;

    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]>=a[i])
        {
            curr++;
            maxi=max(maxi,curr);
        }
        
        else
        {
            curr=0;
        }

    }
    cout<<maxi+1<<endl;


}