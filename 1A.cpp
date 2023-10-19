#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int  n, m,a, temp;
    
    cin >> n >> m >> a;
    if(m < n)
    {
        temp = m;
        m = n;
        n = temp;
    }
   
    if(a >= m)
    {
        long long int sum;
        sum=ceil((float)n/a);
        cout << sum<< endl;
    }
    else
    {
        long long int sum;
        sum=ceil((float)m/a)*ceil((float)n/a);
        cout << sum << endl;
    }
    return 0;
}