#include<bits/stdc++.h>
    #include <iostream>
    using namespace std;
    #define ll long long
    #define ld long double
    #define pb push_back
    #define  mk make_pair
    #define  speed ios_base::sync_with_stdio(0),cin.tie(0), cout.tie(0);
   
#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(int a[], int size)
{
	int max_so_far = INT_MIN, max_ending_here = 0;

	for (int i = 0; i < size; i++) {
        
		max_ending_here = max_ending_here + a[i];
        cout<<a[i]<<": "<<a[i]%2<<endl;
        if(a[i]%2==0 && a[i+1]%2==0)
                {
                  continue; 
                }
        if(a[i]%2!=0 && a[i+1]%2!=0)
                {
                  
                  continue;
                  cout<<"Ll";
                
                }
                
       
                    if (max_so_far < max_ending_here)
                        max_so_far = max_ending_here;

                    if (max_ending_here < 0)
                        max_ending_here = 0;
             
		
	}
	return max_so_far;
}


int main()
{
	int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

	
	int max_sum = maxSubArraySum(a, n);
	cout << max_sum<<endl;
	return 0;
}
