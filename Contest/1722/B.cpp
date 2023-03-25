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
      string s1,s2; cin>>s1>>s2;
      bool flag=true;
      for(int i=0;i<n;i++)
      {
         if(s1[i]==s2[i]) continue;
         else if(s1[i]=='B' && s2[i]=='G') continue;
         else if(s1[i]=='G' && s2[i]=='B') continue;
         else 
         {
            flag=false;
            break;
         }
      }
      if(flag) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
   }
   return 0;
}