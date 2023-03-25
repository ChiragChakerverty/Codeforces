#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1000003;



int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   string s,t; cin>>s>>t;
   int ans=0;
   set<char> req(t.begin(),t.end());
   set<char> avail(s.begin(),s.end());
   for(auto it=req.begin();it!=req.end();++it)
   {  
      int flag=0;
      for(auto bt=avail.begin();bt!=avail.end();++bt)
      {
         if(*it==*bt)
         {
            flag=1;
            break;
         }
      }
      if(flag==0)
      {
         cout<<-1<<endl;
         return 0;
      }
   }
   for(int i=0;i<t.size();i++)
   {
      for(int j=0;j<s.size();j++)
      {
         if(t[i]==s[j])
         {
            ans++;
            s[j]='.';
            break;
         }
      }
   }
   cout<<ans<<endl;
   return 0;
}