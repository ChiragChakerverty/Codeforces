#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        int count = 0;
        int n = abs(b - a);
        for (int k = 10; k > 0; k--)
        {
            if (n / k > 0)
            {
                count = count + n / k;
                n = n - k * (n / k);
                if (n == 0)
                    break;
            }
        }

        cout << count << endl;
    }
    return 0;
}