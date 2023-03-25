#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1000003;

bool by_value(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}

int main()
{
    map<int, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        m[s]++;
    }
    vector<pair<int, int>> v;
    for (auto &it : m)
    {
        v.push_back(it);
    }
    sort(v.begin(), v.end(), by_value);
    cout << v[0].second << " " << v.size() << endl;
    return 0;
}