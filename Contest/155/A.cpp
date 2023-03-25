#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int count = 0;
    if (n > 1)
    {
        if (arr[1] > arr[0] || arr[1] < arr[0])
            count++;
        int max = arr[0], min = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > max)
                max = arr[i];
            if (arr[i] < min)
                min = arr[i];
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] > max || arr[j] < min)
                    count++;
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}