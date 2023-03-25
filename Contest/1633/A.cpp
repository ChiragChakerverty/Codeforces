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
        int n;
        cin >> n;

        if (n % 7 == 0)
            cout << n << endl;
        else
        {
            int q=n/10;

            int rem = n % 7;
            if((n-rem)>=(q*10) && (n-rem)<=((q+1)*10)) n=n-rem;
            else n = n + (7 - rem);
            cout << n << endl;
        }
    }
    return 0;
}