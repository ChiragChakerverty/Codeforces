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
        ll arr[n][m];
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++) cin>>arr[i][j];
        }
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ll check=arr[i][j];
                int k=i+1;
                int l=j+1;
                while(k<n && l<m)
                {
                    check=check+arr[k][l];
                    k++; l++;
                }
                k=i-1,l=j+1;
                while(k>-1 && l<m)
                {
                    check=check+arr[k][l];
                    k--; 
                    l++;
                }
                k=i+1,l=j-1;
                while(k<n && l>-1)
                {
                    check=check+arr[k][l];
                    k++;
                    l--;
                }
                k=i-1; l=j-1;
                while(k>-1 && l>-1)
                {
                    check=check+arr[k][l];
                    k--;
                    l--;
                }
                ans=max(ans,check);
            }
        }  
        cout<<ans<<endl;
    }
    return 0;
}