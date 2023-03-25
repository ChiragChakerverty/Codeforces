#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << abs(arr[1] - arr[0]) << " " << (arr[n - 1] - arr[0]) << endl;
    for (int i = 1; i < n - 1; i++)
    {
        long long int a = min(abs(arr[i + 1] - arr[i]), abs(arr[i - 1] - arr[i]));
        long long int b = max(abs(arr[i] - arr[0]), abs(arr[i] - arr[n - 1]));
        cout << a << " " << b << endl;
    }
    cout << abs(arr[n - 1] - arr[n - 2]) << " " << abs(arr[n - 1] - arr[0]) << endl;
    return 0;
}