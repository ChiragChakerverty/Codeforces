#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> p;
typedef pair<double,double> pdd;
typedef vector<ll> v;
typedef vector<vector<ll> > vv;
typedef vector<p> vp;
ll mod = 1e9 + 7 ;
double eps = 1e-12;
#define int ll
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

void solve(){
}
int32_t main()
{
    fast_cin();
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) {
        int n , q ; cin>>n>>q ; 
        v v1(n, -1) ; 
        deque<int> dq; 
        set<int>st ; 
        forn(i , 0 , n ){
        dq.push_back(i+1) ; 
        st.insert(i+1) ; 
        }

        int cnt = 1 ; 
        int ptr = n - 1; 
        forn(i,0,q){ 
            int temp ; cin>>temp ; 
            if(ptr == -1)continue;
            if(st.find(temp) == st.end()){
                v1[ptr] = cnt ; 
                int k = dq.back() ; 
                st.erase(k) ; 
                dq.pop_back() ; 
                dq.push_front(temp) ; 
                st.insert(temp) ;  
                ptr-- ; 
            }
            cnt++; 

        }

        forn(i, 0 , n){
            cout<<v1[i]<<" " ; 
        }
        cout<<ln ; 
    }
    return 0;
}