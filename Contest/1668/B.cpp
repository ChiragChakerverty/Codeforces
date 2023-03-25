#include <bits/stdc++.h>

using namespace std;

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
        ull n,m; cin>>n>>m;
        ull arr[n];
        ull sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
        if(n>=m)
        {
            cout<<"NO"<<endl;
            continue; 
        }
        sort(arr,arr+n);
        sum=sum+arr[n-1]-arr[0];
        sum=sum+n;
        if(sum<=m) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}