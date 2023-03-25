#include <bits/stdc++.h>  
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> p;
typedef pair<ld,ld> pd;
typedef vector<ll> v;
typedef vector<vector<ll>> vv;
typedef vector<vector<p> > vvp;
typedef vector<p> vp;
typedef map<ll,ll> mp;
#define ln "\n" 
#define int ll
#define YES cout<< "YES"<<ln
#define NO cout<< "NO"<<ln
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define pb push_back
#define fi first
#define se second
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 
 int get_bit_count(long long n){
return __builtin_popcountll(n);
}
void printVp(vp v1){
forn(i , 0 , v1.size()){
 cout<<v1[i].first<<' '<<v1[i].second<<ln;
 }
}
void printV(v v1){
 forn(i , 0 , v1.size()){
 cout<<v1[i]<<' ';
}
 cout<<ln;
}
int highestPowerof2(int n)
{
 int p = (int)log2(n);
 return (int)pow(2, p);
}

int32_t main()
{
    fast_cin();
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) {
       int n , m ; cin>>n>>m ; 
       string s1 , s2 ; 
       cin>>s1>>s2 ; 
       int cnt = 0 ; 
       forn(i,1,n){
           if(s1[i] == s1[i-1]){
            cnt++;
           }
       }
       forn(i,1,m){
        if(s2[i] == s2[i-1]){
            cnt++;
        }
       }

       if(cnt == 0 ){
        YES;
       }
       else if(cnt >= 2){
            NO;
       }
       else{
        if(s1[n-1] == s2[m-1]){
            NO; 
        }
        else{
            YES;
        }
       }
 }
    return 0;
}