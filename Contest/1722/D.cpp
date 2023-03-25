#include <bits/stdc++.h>
using namespace std;

#define Chirag ios_base::sync_with_stdio(false); cin.tie(NULL);

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

#define int long long

const ll mod = 1e9 + 7;

int32_t main()
{
   Chirag
   ll t;
   cin >> t;
   while(t--)
   {
      int n; cin>>n;
      string s; cin>>s;
      if(n==1)  // edge case
      {
         cout<<0<<endl;
         continue;
      }
      int org=0;
      vector<int> dup;
      for(int i=0;i<s.size();i++)
      {
         if(s[i]=='L')
         {
            org=org+i;
            dup.push_back(n-i-1-i);
         }
         else if(s[i]=='R')
         {
            //i-(n-i-1)  easy calculation
            org=org+n-i-1;
            dup.push_back(i-n+i+1);
         }
      }
      sort(dup.begin(),dup.end(),greater<int>());
      for(int i=0,j=0;i<n;i++,j++)
      {
         if(dup[j]>0) org=org+dup[j];
         cout<<org<<" ";
      }
      cout<<endl;
   }
   return 0;
}