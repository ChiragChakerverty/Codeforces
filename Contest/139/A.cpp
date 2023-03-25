#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1000003;

int main()
{
    int n;
    cin >> n;
    int arr[7];
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < 7; i++)
        cin >> arr[i];
    for (int i = 0; i < 7; i++)
    {
        sum = sum + arr[i];
        if (sum >= n)
        {
            ans = i;
            break;
        }
        if (i == 6)
            i = -1;
    }
    cout << ans + 1 << endl;
    return 0;
}