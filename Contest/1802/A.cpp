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
        int n ; cin>>n ; 
        int c1 = 0 , c2 = 0 ; 
        forn(i , 0 , n ){
        int x ; cin>>x ; 
         if(x > 0 )c1++; 
         else c2++; 
        }
    
        vector<int>v2 , v3; 
        forn(i ,0 , c1){
            v2.push_back(i+1) ; 
        }
        forn(i , 0 , c2){
            int x = v2[v2.size() -1] ; 
            if(x - 1 >= 0 ) v2.push_back(x - 1 ) ; 
            else v2.push_back(0) ; 
        }

        
       
        while(c1 && c2){
            v3.push_back(1) ; 
            v3.push_back(0) ; 
            c1-- ; 
            c2-- ; 
        }

        forn(i ,0 , c1){
            v3.push_back(i+1) ; 
        }
        forn(i , 0 , c2){
            int x = v3[v3.size() -1] ; 
            if(x - 1 >= 0 ) v3.push_back(x - 1 ) ; 
            else v3.push_back(0) ; 
        }

        forn(i , 0  ,v2.size()){
           cout<<v2[i]<<" " ; 
        }
        cout<<ln ; 
         forn(i , 0  ,v3.size()){
           cout<<v3[i]<<" " ; 
        }
        cout<<ln ; 
        
    }
    return 0;
}