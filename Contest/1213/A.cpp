#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1e9 + 7;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n; cin>>n;
   int even=0,odd=0;
   for(int i=0;i<n;i++)
   {
      int x; cin>>x;
      if(x%2) odd++;
      else even++;
   }
   cout<<min(odd,even)<<endl;
   return 0;
}
// 1 5 6 9 8 63 4
//  99 101 103 4 6 8 10