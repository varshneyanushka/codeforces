#include<iostream>

using namespace std;

int main()

{
        string s;
        cin>>s;
    
        if(s.find('9')<s.length())
        {
            cout<<"YES"<<endl;
        }
         else if(s.find('Q')<s.length())
        {
            cout<<"YES"<<endl;
        }
         else if(s.find('H')<s.length())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
}