#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    if(s.length()<7)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    int count=0;
    
    for(int i=0;i<s.length()-1;i++)
    {
        
            if(s[i]-s[i+1]==0)
            {
                count++;
            }
            else
            {
                count=0;
            }
            if(count==6)
            {
                cout<<"YES"<<endl;
                return 0;
            }
    }
        
    
    
   
    
        cout<<"NO"<<endl;
    
    return 0;
}