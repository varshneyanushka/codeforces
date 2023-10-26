#include <iostream>

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ptr=0;
    while(ptr<s.length())
    {
    int pos=s.find("WUB");
    if(pos<s.length())
    {
        s.erase(pos,3);
        ptr=0;
    }
    else{
        ptr++;
    }
    
    }
    cout<<s<<endl;
    

}