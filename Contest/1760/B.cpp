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
      map<char,int> m;
      char haha='a';
      for(int i=1;i<=26;i++)
      {
         m.insert({haha,i});
         haha++;
      }
      sort(s.begin(),s.end());
      cout<<m[s[n-1]]<<endl;
   }
   return 0;
}