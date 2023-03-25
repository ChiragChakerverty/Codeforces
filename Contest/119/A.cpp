#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a, b, n;
    cin >> a >> b >> n;
    while (n != 0)
    {
        int simon = __gcd(a, n);
        n = n - simon;
        // cout<<n<<" ";
        if (n < 1)
        {
            cout << 0 << endl;
            break;
        }
        int antisimon = __gcd(b, n);
        n = n - antisimon;
        // cout<<n<<" "<<endl;
        if (n < 1)
        {
            cout << 1 << endl;
            break;
        }
    }

    return 0;
}