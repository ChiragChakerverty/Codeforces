#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1000003;

int main()
{
    double n;
    cin >> n;
    double ans = 0;
    while (true)
    {
         if (n == 1)
            break;
        ans = ans + 1 / n;
        n--;
    }
    ans = ans + 1.000000000000;
    cout << ans << endl;
    return 0;
}