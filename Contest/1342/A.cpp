#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int cost = 0;
        long long int x, y, a, b;
        cin >> x >> y >> a >> b;

        if (b <= 2 * a)
        {
            int c = min(x, y);
            x = x - c;
            y = y - c;
            cost = (c * b) + (x * a) + (y * a);
        }
        else
        {
            cost = (x + y) * a;
        }
        cout << cost << endl;
    }
    return 0;
}