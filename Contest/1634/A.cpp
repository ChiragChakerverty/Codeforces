#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1e9 + 7;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    string t = s;
    if (k == 0)
      cout << 1 << endl;
    else
    {
      reverse(s.begin(), s.end());
      if (t == s)
        cout << 1 << endl;
      else
        cout << 2 << endl;
    }
  }
  return 0;
}