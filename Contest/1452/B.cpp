#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define push_back pb
#define vint vector<int>
#define vll vector<ll>
#define fr(i, a, b) for(int i = a; i < b; ++i)
#define M ll(1e9 + 7)
#define trace(x) cout << #x << " = " << x << "\n"
 
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int _ = 1;
  cin >> _;
  while (_--)
  {
    ll n, mx = INT_MIN;
    ll sum = 0;
    cin >> n;
    fr(i, 0, n)
    {
      ll x;
      cin >> x;
      sum += x;
      mx = max(mx, x);
    }
    ll cl = ceil(sum * 1.0 / (n - 1));
    cout << (max(mx, cl) * (n - 1)) - sum << endl;
  }
  return 0;
}