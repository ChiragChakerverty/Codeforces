#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

#define int long long

const ll mod = 1e9 + 7;



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
       int n,m; cin>>n>>m;
       int arr[n][m];
       int big=INT_MIN;
       int index1=0,index2=0;
       for(int i=0;i<n;i++)
       {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]>big)
                {
                    big=arr[i][j];
                    index1=i;
                    index2=j;
                }
            }
       }
       int ans1=max(index1+1,n-index1);
       int ans2=max(index2+1,m-index2);
       int ans=ans1*ans2;
       cout<<ans<<endl;
    }
    return 0;
}