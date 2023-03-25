#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1e9 + 7;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   ull n; cin>>n;
   vector<int> even,odd;
   while(n--)
   {
      ull x; cin>>x;
      if(x%2==0) even.push_back(x);
      else odd.push_back(x);
   }
   ull even_sum=0;
   ull k=0;
   if(even.size()!=0)
   {
      even_sum=accumulate(even.begin(),even.end(),k);
   }
   ull odd_sum=0;
   ull q=0;
   if(odd.size()%2==0 && odd.size()!=0) odd_sum=accumulate(odd.begin(),odd.end(),q);
   else if(odd.size()%2==1 && odd.size()!=0)
   {  
      // cout<<"hi"<<endl;
      sort(odd.begin(),odd.end());
      odd_sum=accumulate(odd.begin(),odd.end(),q);
      odd_sum=odd_sum-odd[0];
   }
   ull ans=even_sum+odd_sum;
   cout<<ans<<endl;
   return 0;
}
// 1 5 6 9 8 63 4
//  99 101 103 4 6 8 10