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
        int n;
        cin >> n;
        string s;
        cin >> s;

        int half = n / 2;
        if (n % 2 == 0)
            half--;
        int count = 1;
        char c = s[half];
        for (int i = half - 1; i >= 0; i--)
        {
            if (s[i] == c)
                count++;
            else
                break;
        }
        for (int i = half + 1; i < n; i++)
        {
            if (s[i] == c)
                count++;
            else
                break;
        }
        cout << count << endl;
    }
    return 0;
}

// abbba