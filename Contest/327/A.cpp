#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

#define int long long

const ll mod = 1e9 + 7;

int32_t main()
{
   int n; cin>>n;
   vector<int> v;
   int ans2=0;
   for(int i=0;i<n;i++)
   {
      int x; cin>>x;
      ans2=x+ans2;
      v.push_back(x);
   }
   vector<int> ans;
   for(int i=0;i<n;i++)
   {
      if(v[i]==0) ans.push_back(1);
      else ans.push_back(-1*1);
   }
   int max_sum=INT32_MIN;
   int curr_sum=0;
   for(int i=0;i<ans.size();i++)
   {
      curr_sum=curr_sum+ans[i];
      if(curr_sum>max_sum) max_sum=curr_sum;
      if(curr_sum<0) curr_sum=0;
   }
   cout<<max_sum+ans2<<endl;
   return 0;
}