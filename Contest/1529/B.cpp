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
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] <= 0)
                count++;
        }
        sort(arr, arr + n);
        int index = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            {
                index = i;
                break;
            }
        }
        int flag = 1;
        if (index != 0)
        {
            for (int i = 0; i < index; i++)
            {
                if (abs(arr[i] - arr[i + 1]) >= arr[index])
                    continue;
                else
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag && index)
            count++;
        if(count==0) count++;
        cout << count << endl;
    }
    return 0;
}