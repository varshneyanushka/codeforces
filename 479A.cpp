#include<bits/stdc++.h>
    #include <iostream>
    using namespace std;
    #define ll long long
    #define ld long double
    #define pb push_back
    #define  mk make_pair
    #define  speed ios_base::sync_with_stdio(0),cin.tie(0), cout.tie(0);
    #define  ff(i,x,y) for(ll i=x;i<y;i++)
    #define  fb(i,x,y)  for(ll i=x;i=+y;i--)
    using namespace std;
    int op1(int a,int b,int c)
    {
        int op;
        op=a*b*c;
        return op;
    }

    int op2(int a,int b,int c)
    {
        int op;
        op=(a+b)*c;
        return op;
    }
    int op3(int a,int b,int c)
    {
        int op;
        op=a*(b+c);
        return op;
    }
    int op4(int a,int b,int c)
    {
        int op;
        op=a+b+c;
        return op;
    }
    int main()
    {   speed;
        int a,b,c;
        int o1,o2,o3,o4;
        cin>>a>>b>>c;
        o1=op1(a,b,c);
        o2=op2(a,b,c);
        o3=op3(a,b,c);
        o4=op4(a,b,c);
        int f;
        o1=max(o1,o2);
        o2=max(o3,o4);
        f=max(o1,o2);
        cout<<f<<endl;
        return 0;
    }