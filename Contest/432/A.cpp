#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int teams = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (abs(5 - arr[i]) >= k)
            count++;
        if (count == 3)
        {
            count = 0;
            teams++;
        }
    }
    cout << teams << endl;
    return 0;
}