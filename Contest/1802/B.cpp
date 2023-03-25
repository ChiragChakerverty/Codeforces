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
        v v1(n);
        forn(i, 0, n)
        {
            int x;
            cin >> x;
            v1[i] = x;
        }


        int maxcnt = 0 ; 
        int net = 0  ; 
        int tot = 0 ; 
        int cnt = 0 ; 
        int ans = 0 ; 

        forn(i , 0 , n ){
            if(v1[i] == 1){
                maxcnt++ ; 
                tot++; 
            }
            else {
                ans = max(ans , cnt + maxcnt) ; 
                if(tot > 0 ) cnt = tot/2 +1 ; 
                maxcnt = 0 ; 

            }
        }


        cout<< max(ans , cnt + maxcnt) <<ln ; 
    }
    return 0;
}