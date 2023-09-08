#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]-s[i+1]==1 || s[i]-s[i+1]==-1)
        {
            s.erase(i,2);
            i=i-2;
        }
    }
    
    cout<<s.length()<<endl;
    return 0;
}