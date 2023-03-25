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
    while(t--)
    {
        ll n,m; cin>>n>>m;
        string s[n];
        for(ll i=0;i<n;i++) cin>>s[i];
        ll min_diff=INT_MAX;
        for(ll i=0;i<n;i++)
        {   
            for(ll j=i+1;j<n;j++)
            {
                ll diff=0;
                for(ll k=0;k<m;k++)
                {
                    diff=diff+abs(int(s[i][k])-int(s[j][k]));
                    //cout<<diff<<" ";
                }
                if(diff<min_diff) min_diff=diff;
            }
        }
        cout<<min_diff<<endl;
    }
    return 0;
}