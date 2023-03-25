#include <bits/stdc++.h>

using namespace std;

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
        int count_0 = 0, count_1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
                count_0++;
            else
                count_1++;
        }
        if (count_1 <= n / 2)
        {
            cout << count_0 << endl;
            while (count_0--)
                cout << 0 << " ";
            cout << endl;
        }
        else if (count_0 < n / 2)
        {
            if (count_1 % 2)
            {
                if (count_0 + 1 <= n / 2)
                {   
                    //cout<<"hi"<<endl;
                    count_1--;
                    cout << count_1 << endl;
                    while (count_1--)
                        cout << 1 << " ";
                    cout << endl;
                }
                else
                {
                    count_1++;
                    cout << count_1 << endl;
                    while (count_1--)
                        cout << 1 << " ";
                    cout << endl;
                }
            }
            else
            {
                cout << count_1 << endl;
                while (count_1--)
                    cout << 1 << " ";
                cout << endl;
            }
        }
    }
    return 0;
}