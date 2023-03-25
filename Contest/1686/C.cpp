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
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        if (n % 2)
        {
            cout << "NO" << endl;
            continue;
        }
        sort(arr, arr + n);
        vector<ll> ans;
        for(int i=n-1,j=(n/2-1);i>=n/2;i--,j--)
        {
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
        }
        int flag = 1;
        for (int i = 1; i < ans.size() - 1; i++)
        {
            if ((ans[i] > ans[i - 1] && ans[i] > ans[i + 1]) || (ans[i] < ans[i - 1] && ans[i] < ans[i + 1]))
                continue;
            else
            {
                flag = 0;
                break;
            }
        }
        int ct=ans.size();
        if((ans[ct-1]>ans[ct-2]) && ans[ct-1]<ans[0]) flag=0;  // for circular 
        else if((ans[ct-1])<ans[ct-2] && ans[ct-1]>ans[0]) flag=0;
        if (flag == 0)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < ans.size(); i++)
                cout << ans[i] << " ";
            cout<<endl;
        }
        
    }
    return 0;
}