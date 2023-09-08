#include <iostream>


using namespace std;

int main()
{
    
       long long int  s;
       long long int temp;

       cin>>s;
       temp=s;
       
       if(temp==0)
       {
        cout<<"no"<<endl;
        
       }
       int n=0;
       while ( temp!= 0) {
        temp = temp / 10;
        ++n;
       }
       
       for(int i=1;i<=n;i++)
       {
        temp=s;
      
        long long int t1=temp - 1;
        long long int t14 =temp - 14;
        long long int t144 =temp - 144;
       
         if(t1%10 ==0)
         {
            s=t1/10;
            
         }
         else if(t14%100==0)
         {
            s=t14/100;
            
         }
         else if(t144%1000 ==0)
         {
            s=t144/1000;
            
         }
        

         
       }

       if(s==0)
       {
        cout<<"YES"<<endl;

       }
       else{
        cout<<"NO"<<endl;

       }
       
    
}