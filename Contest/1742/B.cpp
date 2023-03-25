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
      int arr[n];
      for(int i=0;i<n;i++) cin>>arr[i];
      set<int> s(arr,arr+n);
      if(s.size()==n) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
   }
   return 0;
}