#include <iostream>

#include <bits/stdc++.h>
using namespace std;
int main() 
{

int t;
cin>>t;
while(t--)
{
  int n, i, flag = 0;
  cin>>n;
  if (n == 0 || n == 1)
    flag = 0;

  for (i = 2; i <= n / 2; ++i) 
  {

    if (n % i == 0) {
      flag ++;
      
    }
    
    if(flag==2)
    {
        break;
    }
  }
  cout<<flag;
  if (flag == 1)
  {
    cout<<"YES"<<endl;
    
  }
  else
  {
    cout<<"NO"<<endl;
  }
}

  return 0;
}