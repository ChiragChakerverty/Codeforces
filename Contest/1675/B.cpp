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
        ll n;
        cin >> n;
        ll arr[n];

        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        ll ans = 0;
        int check1 = 1;
        for (int i = n - 1; i >= 1; i--)
        {
            if (arr[i] > arr[i - 1])
                continue;
            else
            {
                while (arr[i] <= arr[i - 1])
                {
                    arr[i - 1] = arr[i - 1] / 2;
                    ans++;
                    if (arr[i - 1] == 0 && arr[i] == 0)
                    {
                        check1 = 0;
                        break;
                    }
                }
            }
            if (check1 == 0)
                break;
        }
        if (check1 == 0)
        {
            cout << -1 << endl;
            continue;
        }
        int check = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] < arr[i + 1])
                continue;
            else
            {
                check = 0;
                break;
            }
        }
        if (check)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}