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
   while (t--)
   {
      int n; cin>>n;
      string s; cin>>s;
      set<char> st(s.begin(),s.end());
      int ans=(st.size()*2)+(n-st.size());
      cout<<ans<<endl;
   }
   return 0;
}