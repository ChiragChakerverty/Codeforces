#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
typedef unsigned long long int ull;
 
const ll mod = 1e9 + 7;
 
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n; cin>>n;
   vector<int> even,odd;
   for(int i=0;i<n;i++)
   {
      int x; cin>>x;
      if(x%2) odd.push_back(x);
      else even.push_back(x);
   }
   ull sum_odd=0,sum_even=0,ans=0;
   sort(odd.begin(),odd.end());
   sort(even.begin(),even.end());
   if(even.size()==0)
   {
      if(odd.size()==1) ans=0;
      else
      {
         odd.pop_back();
         sum_odd=accumulate(odd.begin(),odd.end(),0);
         ans=sum_odd;
      }
   }
   else if(odd.size()==0)
   {  
      //cout<<"YES"<<endl;
      if(even.size()==1) ans=0;
      else
      {
         even.pop_back();
         sum_even=accumulate(even.begin(),even.end(),0);
         ans=sum_even;
      }
   }
   else 
   {
      while((odd.size()!=0) && (even.size()!=0))
      {
         odd.pop_back();
         even.pop_back();
      }
      if((odd.size()==0 || odd.size()==1) && (even.size()==0 || even.size()==1))
      {
         ans=0;
      }
      else if(odd.size()==0)
      {
         sum_even=accumulate(even.begin(),even.end()-1,0);
         ans=sum_even;
      }
      else if(even.size()==0)
      {
         sum_odd=accumulate(odd.begin(),odd.end()-1,0);
         ans=sum_odd;
      }
   }
   cout<<ans<<endl;
   return 0;
}