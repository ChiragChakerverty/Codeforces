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
      vector<int> v;
      for(int i=0;i<n;i++) 
      {
         int x; cin>>x;
         v.push_back(x);
      }
      int ans=0;
      int i=0,j=n-1;
      while(i<j)
      {
         if(v[i]==1 && v[j]==0)
         {
            swap(v[i],v[j]);
            ans++;
            i++;
            j--;
         }
         if(v[j]==1) j--;
         if(v[i]==0) i++; 
      } 
      cout<<ans<<endl;
   }
   return 0;
}