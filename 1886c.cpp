#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string* s;
        cin >> s;
        cin >> n;
        int maxi = 97;
        int curr;
        char arr[s.length()];
        arr[0] = s;
        for (int j = 1; i < s.length(); 1 ++)
        {
            for (int i = 0; i < s.length(); i++)
            {
                char k;
                k = s[i];
                curr = int(k);
                maxi = max(maxi, curr);
                s.erase(i, 1);
            }
            arr[j]=s;
        }
    }
}
