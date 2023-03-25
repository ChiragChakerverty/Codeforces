#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;

int main()
{
   int t; cin>>t;
   while(t--)
   {
       ull n; cin>>n;
       ull sum=0;
       if(n==1) cout<<0<<endl;
       else 
       {
           while(n!=1)
           {
               sum=sum+((4*n)-4)*((n-1)/2);
               n=n-2;
           }
           cout<<sum<<endl;
       }
   } 
   return 0;
}