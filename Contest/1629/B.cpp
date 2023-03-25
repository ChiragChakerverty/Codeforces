#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        int req = 0;
        if (l == r)
        {
            if (l == 1)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else
        {
            if (l % 2 == 0 && r % 2 == 0)
                req = (r - l) / 2;
            else
                req = ((r - l) / 2) + 1;

            if (req > k)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}