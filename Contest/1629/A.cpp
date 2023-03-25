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
        int n, k;
        cin >> n >> k;

        multimap<int, int> m;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 0; i < n; i++)
            m.insert({a[i], b[i]});
        for (auto it = m.begin(); it != m.end(); ++it)
        {
            if (k >= it->first)
                k = k + it->second;
            else
                break;
        }
        cout << k << endl;
    }
    return 0;
}