#include<bits/stdc++.h>
using namespace std;
#define int                 long long
#define ll                  long long
#define ull                 unsigned long long
#define inf                 LLONG_MAX
#define ff                  first
#define ss                  second
#define seti                set<int>
#define useti               unordered_set<int>
#define mapii               map<int, int>
#define umapii              unordered_map<int, int>
#define vpi                 vector <pair<int, int>>
#define vi                  vector<ll>
#define pb                  push_back
#define all(var)            var.begin(), var.end()
#define rall(var)           var.rbegin(), var.rend()
#define present(c, x)       (c.find(x) != c.end()) 
#define lb                  lower_bound
#define ub                  upper_bound 
#define spc <<" "<<
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus1 cout<<-1<<endl;
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
void ipv(vector<ll> &v){for(auto &i:v)cin>>i;}
void opv(vector<ll> &v){for(auto i:v)cout<<i<<" "; cout<<endl;}
//const int mod = 1000000007;
//const int mod = 998244353;
string to_binary(int k){string s; while(k>0){if(k%2==0)s+='0';else s+='1';k/=2;} /*reverse(all(s));*/ return s;}
 
int power(long long x, unsigned int y, int mod)
{
    int res = 1;     // Initialize result
    x = x % mod; 
    if (x == 0) return 0; // In case x is divisible by mod;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % mod;
        y = y>>1; // y = y/2
        x = (x*x) % mod;
    }
    return res;
}
 
void solve()
{
    int n; cin>>n;
    vpi v(n+1); for(int i=1;i<n+1;i++){cin>>v[i].ss; v[i].ff=i;}
    // for(int i=1;i<n+1;i++)cout<<v[i].ff spc v[i].ss<<endl;
    int ans=0;
    for(int i=1;i<n+1;i++)
    {
        for(int j=i+1;j<n+1;j++)
        {
            if(v[i].ff<=v[j].ff and v[i].ss>=v[j].ss)ans++;
            if(v[i].ff>=v[j].ff and v[i].ss<=v[j].ss)ans++;
            
        }
    }
    cout<<ans<<endl;
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
    // #ifndef ONLINE_JUDGE
    //   freopen("billboard.in","r",stdin);
    //   freopen("billboard.out","w",stdout);
    //   #endif
    
    ll test=1;
     cin>>test;
    while(test--)
    { 
        solve();
    }
    return 0;
}
 
 
 
//continue front back