#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1e9 + 7;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin >> n;
   int sum = 0;
   for (int i = 0; i < n; i++)
   {
      int x, y;
      cin >> x >> y;
      if (sum + x <= 500)
      {
         sum = sum + x;
         cout << 'A';
      }
      else
      {
         sum = sum - y;
         cout << 'G';
      }
   }
   return 0;
}