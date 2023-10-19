#include <iostream>
#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        int coins = 0;

        for (int i = 0; i < s.length() - 1; i++) 
        {
        if (s[i] == 'A' && s[i + 1] == 'B') {
            coins++;
            s[i] = 'B';
            s[i + 1] = 'C';
        } else if (s[i] == 'B' && s[i + 1] == 'A') {
            coins++;
            s[i] = 'C';
            s[i + 1] = 'B';
        }
    }
    for (int i = s.length() - 1; i >=0 ; i--)
    {
        if (s[i] == 'A' && s[i + 1] == 'B') {
            coins++;
            s[i] = 'B';
            s[i + 1] = 'C';
        } else if (s[i] == 'B' && s[i + 1] == 'A') {
            coins++;
            s[i] = 'C';
            s[i + 1] = 'B';
        }
    }
    cout<<coins<<endl;
    }
}
