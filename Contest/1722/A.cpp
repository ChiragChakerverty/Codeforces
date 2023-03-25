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
      sort(s.begin(),s.end());
      //cout<<s<<endl;
      if(n==5)
      {
         if(s[0]=='T' && s[1]=='i' && s[2]=='m' && s[3]=='r' && s[4]=='u') cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
      }
      else cout<<"NO"<<endl;
   }
   return 0;
}