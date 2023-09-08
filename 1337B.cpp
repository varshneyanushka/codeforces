#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t>0)
    {
        int flag=0;
        int x,n,m;
        cin>>x;
        cin>>n;
        cin>>m;
        
        while(n>0 && m>0)
        {
         int h=x;
        h=min(((x/2)+10),(x-10));
        if(h==x-10)
        {
            m--;
            
        }
        else{
            n--;
            
        }
        x=h;
        if(x<=0)
        {
           flag=1;
        }
        }
        while(n>0 && m<0)
        {
            x=(x/2)+10;
            n--;
            if(x<=0)
        {
           flag=1;
        }
        }
        while(n<0 && m>0)
        {
            x=x-10;
            m--;
            if(x<=0)
        {
           flag=1;
        }
        }

        if(flag==1)
        { cout<<"yes"<<endl;
          cout<<x;
          
        }
        if(flag==0)
        { cout<<"no"<<endl;
          cout<<x;
        }
        
        

        t--;
    }
    return 0;
}