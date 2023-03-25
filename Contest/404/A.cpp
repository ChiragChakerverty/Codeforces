#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    int n;
    cin >> n;
    char arr[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    char c = arr[0][0];
    char d = arr[0][1];
    if(c==d) 
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != c)
                {
                    cout << "NO" << endl;
                    return 0;
                }
            }
            else if ((i + j) == n - 1)
            {
                if (arr[i][j] != c)
                {
                    cout << "NO" << endl;
                    return 0;
                }
            }
            else
            {
                if (arr[i][j] != d)
                {
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}