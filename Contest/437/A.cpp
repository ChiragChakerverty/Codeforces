#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    string a, b, c, d;
    cin >> a >> b >> c >> d;
    int q = a.size() - 2, w = b.size() - 2, e = c.size() - 2, r = d.size() - 2;
    int flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0;
    if ((q >= 2 * w && q >= 2 * e && q >= 2 * r) || (q <= w / 2 && q <= e / 2 && q <= r / 2))
        flag1 = 1;
    if ((w >= 2 * q && w >= 2 * e && w >= 2 * r) || (w <= q / 2 && w <= e / 2 && w <= r / 2))
        flag2 = 1;
    if ((e >= 2 * w && e >= 2 * q && e >= 2 * r) || (e <= w / 2 && e <= q / 2 && e <= r / 2))
        flag3 = 1;
    if ((r >= 2 * w && r >= 2 * e && r >= 2 * q) || (r <= w / 2 && r <= e / 2 && r <= q / 2))
        flag4 = 1;
    int count = flag1 + flag2 + flag3 + flag4;
    if (count == 1 && flag1 == 1)
        cout << "A" << endl;
    else if (count == 1 && flag2 == 1)
        cout << "B" << endl;
    else if (count == 1 && flag3 == 1)
        cout << "C" << endl;
    else if (count == 1 && flag4 == 1)
        cout << "D" << endl;
    else
        cout << "C" << endl;
    return 0;
}