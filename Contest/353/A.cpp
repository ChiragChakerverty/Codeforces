#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int sum(int arr[], int n)
{
    int add = 0;
    for (int i = 0; i < n; i++)
        add = add + arr[i];
    return add;
}

int main()
{
    int n;
    cin >> n;
    int x[n], y[n];
    int sum1 = 0, sum2 = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
        sum1 = sum1 + x[i];
        sum2 = sum2 + y[i];
    }
    //cout << sum1 << " " << sum2 << endl;
    if (sum1 % 2 == 0 && sum2 % 2 == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    else if ((sum1 % 2 == 1 && sum2 % 2 == 0) || (sum1 % 2 == 0 && sum2 % 2 == 1))
    {
        cout << -1 << endl;
        return 0;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if ((x[i] % 2 == 0 && y[i] % 2 == 1) || (x[i] % 2 == 1 && y[i] % 2 == 0))
            {
                swap(x[i], y[i]);
                ans++;
                int x_sum = sum(x, n);
                int y_sum = sum(y, n);
               // cout << x_sum << " " << y_sum << endl;
                if (x_sum % 2 == 0 && y_sum % 2 == 0)
                {
                    cout << ans << endl;
                    return 0;
                }
            }
        }
    }
    cout << -1 << endl;
    return 0;
}