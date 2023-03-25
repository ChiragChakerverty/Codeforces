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
      string s; cin>>s;
      int count1=0,count2=0,count3=0;
      if(s[0]=='y' || s[0]=='Y') count1++;
      if(s[1]=='e' || s[1]=='E') count2++;
      if(s[2]=='s' || s[2]=='S') count3++;
      if((count1+count2+count3)==3) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
   }
   return 0;
}