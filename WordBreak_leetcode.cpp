#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n= s.length();
        while(n>=0)
        {
            for(string w:wordDict)
            {
                if(w==s.substr())
                {
                    int p=s.find(w);
                    s.erase(p,w.length());
                    n= s.length();
                }
                else
                {
                    break;
                }
            }
        }
        if(n==0)
        {
            return true;

        }
        else
        {
            cout<<n<<endl;
            return false;
        }
    }
};