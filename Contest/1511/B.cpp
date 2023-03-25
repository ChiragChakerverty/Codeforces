#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

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
        int a, b, c;
        cin >> a >> b >> c;
        c = c - 1;
        a--;
        cout << 1;
        while (a--)
            cout << 0;
        cout << " ";
        b = b - c;
        while (b--)
            cout << 1;
        while (c--)
            cout << 0;
        cout << endl;
    }
    return 0;
}