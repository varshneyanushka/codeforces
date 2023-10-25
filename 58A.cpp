#include<iostream>
#include<string>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    
    char chars[] = {'h', 'e', 'l', 'l', 'o'};
    int charIndex = 0;
    
    for (char c : s)
    {
        if (c == chars[charIndex])
        {
            charIndex++;
        }
        
        if (charIndex == 5)
        {
            cout << "YES" << endl;
            return;
        }
    }
    
    cout << "NO" << endl;
}

int main()
{
   solve();
}
