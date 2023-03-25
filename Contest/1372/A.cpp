#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long int sum = 1;
        for (int i = 0; i < n; i++)
        {
            cout << sum << " ";
            sum = sum + 2;
            if (sum > 997)
                sum = sum - 2;
        }
        cout<<endl;
    }
    return 0;
}