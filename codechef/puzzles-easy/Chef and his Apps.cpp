// Chef and his Apps

#include<iostream>
using namespace std;
 int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int s,x,y,z;
         cin>>s>>x>>y>>z;
         int p=s-(x+y);
         if(p>=z)
         {
             cout<<0<<"\n";
         }
         else
         {
             if(z<=p+x || z<=p+y)
             {
                 cout<<1<<"\n";
             }
             else
             {
                 cout<<2<<"\n";
             }
         }
     }
 }