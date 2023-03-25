#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ll n, l;
    cin >> n >> l;
    double arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    double diff = 0, maxdiff = 0;
    for (int i = 1; i < n; i++)
    {
        diff = arr[i] - arr[i - 1];
        if (diff > maxdiff)
            maxdiff = diff;
    }
    double ans = maxdiff / 2.0;
    double corner=max((arr[0]-0),(l-arr[n-1]));
    if (ans < corner)
        ans = corner;
    cout << fixed << ans << endl;
    return 0;
}