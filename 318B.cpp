#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int he=0;
    long long sum=0;
    for (int i = 4; i < s.length(); ++i)
    {
        if (s[i] == 'l')
        {
            if (s[i-4] == 'm' && s[i-3] == 'e' && s[i-2] == 't' && s[i-1] == 'a')
            {
                sum += he;
            }
        }
        else if (s[i-4] == 'h' && s[i-3] == 'e' && s[i-2] == 'a' && s[i-1] == 'v' && s[i] == 'y')
        {
            ++he;
        }
    }
    cout << sum << endl;
    return 0;
}