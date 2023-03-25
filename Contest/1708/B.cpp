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
      int n,l,r; cin>>n>>l>>r;
      int flag=1;
      vector<int> v;
      int lower=l;
      v.push_back(l);
      int i=2;
      //l++;
      while(v.size()!=n)
      {
      //    if(l%i==0)
      //   {
      //       v.push_back(l);
      //      i++;
      //      l=lower;
      //      //l++;
      //   }
      //   else 
      //   {
      //      l++;
      //      if(l>r)
      //      {
      //          flag=0;
      //         break;
      //      }
      //   }
         if(l%i==0)
         {
            v.push_back(l);
            i++;
         }
         else 
         {
            int q=l/i;
            int ans=(q+1)*i;
            if(ans>r)
            {
               flag=0;
               break;
            }
            else
            {
               v.push_back(ans);
               i++;
            }
         }
      }
      if(flag)
      {
        cout<<"YES"<<endl;
        for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
        cout<<endl;
      }
      else cout<<"NO"<<endl;
   }
   return 0;
}