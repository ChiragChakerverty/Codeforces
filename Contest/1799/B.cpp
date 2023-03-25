#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> p;
typedef pair<double, double> pdd;
typedef vector<ll> v;
typedef vector<vector<ll>> vv;
typedef vector<p> vp;
ll mod = 1e9 + 7;
double eps = 1e-12;
#define int ll
#define forn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

void solve()
{
}
int32_t main()
{
    fast_cin();
    ll t;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        v v1(n);
        int mn = 1e9;
        int idx = -1;
        vector<pair<int, int>> ans;
        forn(i, 0, n)
        {
            int x;
            cin >> x;
            v1[i] = x;
            mp[x]++;
            if (x < mn)
            {
                mn = x;
                idx = i;
            }
        }

        if (mp[1] != 0 && mp[1] != n)
        {
            cout << -1 << ln;
        }
        else
        {
            forn(i, 0, n)
            {
                forn(j, 0, n)
                {
                    if (i == j)
                        continue;
                    int cnt = 30;
                    while (cnt)
                    {
                        if (v1[i] > v1[j])
                        {
                            v1[i] = ceil(v1[i] / (v1[j] * 1.0));
                            ans.push_back({i + 1, j + 1});
                        }
                        else if(v1[j] > v1[i]){
                             v1[j] = ceil(v1[j] / (v1[i] * 1.0));
                             ans.push_back({j + 1, i + 1});
                        }
                        cnt--; 
                    }
                }
            }
            cout<<ans.size()<<ln;
            forn(i, 0, ans.size())
            {
                cout << ans[i].first<<" "<<ans[i].second<<ln; ; 
            }
            
        }
    }
    return 0;
}