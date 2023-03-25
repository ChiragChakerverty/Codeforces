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
        long long int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        set<int> s(arr, arr + n);
        int max = 0;
        int index = 0;
        if (s.size() == 1)
            cout << -1 << endl;
        else
        {
            if (arr[0] > max && arr[0] > arr[1])
            {
                max = arr[0];
                index = 1;
            }

            for (int i = 1; i < n - 1; i++)
            {
                if (arr[i] > max && (arr[i - 1] < arr[i] || arr[i] > arr[i + 1]))
                {
                    max = arr[i];
                    index = i + 1;
                }
            }
            if (arr[n - 1] > max)
                index = n;

            cout << index << endl;
        }
    }
    return 0;
}