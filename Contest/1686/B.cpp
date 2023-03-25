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
        int arr[n];
        int ans = 0;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if (is_sorted(arr, arr + n))
            ans = 0;
        else if (is_sorted(arr, arr + n, greater<int>()))
            ans = n/2;
        else
        {
            // int flag = 1;
            // if (arr[1] > arr[0])
            //     flag = 1;
            // else
            //     flag = 0;
            // for (int i = 2; i < n; i++)
            // {
            //     if (arr[i] > arr[i - 1] && flag == 1)
            //         continue;
            //     else if (arr[i] > arr[i - 1] && flag == 0)
            //     {
            //         ans++; flag=1;
            //     }
            //     else if (arr[i] < arr[i - 1] && flag == 0)
            //         continue;
            //     else if (arr[i] < arr[i - 1] && flag == 1)
            //     {
            //         ans++;
            //         flag=0;
            //     }
            for(int i=1;i<n;i++)
            {
               if(arr[i]<arr[i-1])
               {
                   ans++;
                   i++;
               }
            }
        }
        cout << ans << endl;
    }
    return 0;
}