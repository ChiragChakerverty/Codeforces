#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n; cin>>n;
    string s=to_string(n);
    long long int i;
    long long int count=0;
   for(i=0;i<s.size();i++)
   {
       if(s[i]=='1')
       {
           if(s[i+1]=='4')
           {
               if(s[i+2]=='4')
               {
                   s.erase(i,3);
                   i=-1;
               }
               else 
               {
                   s.erase(i,2);
                   i=-1;
               }
           }
           else 
           {
               s.erase(i,1);
               i=-1;
           }
       }
       else
       {
           cout<<"NO"<<endl;
           break;
       }
   }
   if(s.size()==0) cout<<"YES"<<endl;
   return 0;
}