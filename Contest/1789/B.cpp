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

int32_t main()
{
    fast_cin();
    ll t;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        int n;
        cin >> n;
        string s ; cin>> s ; 
        bool f1 = false , f2 = false , f3 = false ; 

        int i = 0 , j = n - 1 ; 

        while(i <  j ){
            if(s[i] != s[j]){
                if(f1&&f2){
                    f3 = true ;  break ; 
                }
                else{
                    f1 = true ; 
                    i++ ; j-- ; 
                }
            }
            else{
                 if(f1){
                    f2 = true ; 
                 }
                 i++ ; j-- ; 
            }
        }

        if(f3){
            cout<<"No"<<ln ; 
        }
        else{
            cout<<"Yes"<<ln ; 
        }
    }
    return 0;
}