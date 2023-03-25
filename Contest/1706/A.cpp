#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

#define int long long

const ll mod = 1e9 + 7;



int32_t main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   ll t;
   cin >> t;
   while(t--)
   {
      int n,m; cin>>n>>m;
      vector<int> v;
      for(int i=0;i<n;i++)
      {
         int x; cin>>x;
         v.push_back(x);
      }
      string s="";
      int b=m;
      while(b--) s=s+'B';
      for(int i=0;i<n;i++)
      {
         int min=v[i];
         int max=m+1-v[i];
         if(min<max)
         {
            if(s[min-1]=='B') s[min-1]='A';
            else if(s[min-1]=='A') s[max-1]='A';
         }
         else 
         {
            if(s[max-1]=='B') s[max-1]='A';
            else if(s[max-1]=='A') s[min-1]='A';
         }
      }
      cout<<s<<endl;
   }
   return 0;
}