#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
   ll n; cin>>n;
   ll arr[n];
   for(int i=0;i<n;i++) cin>>arr[i];
   bool flag=true,ans=true;
   ll pos=0;
   for(int i=0;i<n-1;i++)
   {    
       if(flag)
       {
           if(arr[i]>arr[i+1])
           {
               flag=false;
               pos=i+1;
           }

       }
       else
       {
           if(arr[i+1]<arr[i])
           {
               ans=false;
               break;
           }
       }
   }
   if(arr[0]<arr[n-1] && n!=2) ans=false;
   if(ans && flag)
   {
       cout<<0<<endl;
       return 0;
   }
   else if(flag)
   {
       cout<<-1<<endl;
       return 0;
   }
   else if(ans && (!flag))
   {
       cout<<n-pos<<endl;
       return 0;
   }
   else if(!ans)
   {
       cout<<-1<<endl;
       return 0;
   }
   return 0;
}