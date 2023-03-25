// 5070_vikas kumar6:23 PM
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, lenx = 0, leny = 0;
    cin >> n;
    long long int a[n+1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a+1, a + (n+1));
    for (int i = 1; i <= n; i++)
    {
        if (i <= n / 2)
            lenx = lenx + a[i];
        else
            leny = leny + a[i];
    }

    cout << (lenx * lenx) + (leny * leny) << endl;
    return 0;
}