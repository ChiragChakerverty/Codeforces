#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1e9 + 7;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int arr[4];
   for (int i = 0; i < 4; i++)
      cin >> arr[i];
   sort(arr, arr + 4);
   if (arr[0] + arr[1] > arr[2] || arr[1] + arr[2] > arr[3])
      cout << "TRIANGLE" << endl;
   else if ((arr[0] + arr[1] == arr[2]) || (arr[1] + arr[2] == arr[3]))
      cout << "SEGMENT" << endl;
   else
      cout << "IMPOSSIBLE" << endl;

   return 0;
}