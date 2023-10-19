#include<iostream>

using namespace std;
void solve()
{
    string s;
    cin>>s;
    int ptr;
    for(int i=0;i<s.length();i++)
    {
        if(s.find("h")<s.length())
        {
            s.erase(s.begin()+i);
            continue;
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    for(int i=0;i<s.length();i++)
    {
       if(s.find("e")<s.length())
        {
            s.erase(s.begin()+i);
            continue;
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    for(int i=0;i<s.length();i++)
    {
        if(s.find("l")<s.length())
        {
            s.erase(s.begin()+i);
            continue;
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    for(int i=0;i<s.length();i++)
    {
       if(s.find("l")<s.length())
        {
            s.erase(s.begin()+i);
            continue;
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    for(int i=0;i<s.length();i++)
    {
       if(s.find("o")<s.length())
        {
            s.erase(s.begin()+i);
            continue;
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;
}
int main()

{
   solve();
}