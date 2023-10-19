#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define  mk make_pair
#define  speed ios_base::sync_with_stdio(0),cin.tie(0), cout.tie(0);


using namespace std;
int main()
{   speed;
    ll n,k;
    cin>>n>>k;
  vector<int> a(n);
    vector<int> b(n);
    int time = 0;

    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    vector <int>curr;
    vector <int>final;
    int ptr=0;
    for (int i = 1; i <= n; i++)
    {
        for (int j= 0; j < n; j++)
        {
            if(i==a[i])
            {
                curr.pb(b[i]);
                ptr++;
            }
            sort(curr.begin(),curr.end());
            curr.pop_back();
            ptr--;
            final.insert(final.end(), curr.begin(), curr.end());

        }
    }
     sort(final.begin(),final.end());
    
    for (int i = 0; i < ptr; i++)
    {
        time=time+final[i];
    }
    
    cout<<time<<endl;
    


}

