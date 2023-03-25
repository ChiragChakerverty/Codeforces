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
       int n; cin>>n;
       vector<int> v;
       int smallest=INT32_MAX;
       int small_index=0;
       for(int i=0;i<n;i++)
       {
            int x; cin>>x;
            if(x<smallest)
            {
                smallest=x;
                small_index=i+1;
            }
            v.push_back(x);
       }
       if(n%2)
       {
            cout<<"Mike"<<endl;
            continue;
       }
       else 
       {
            if(small_index%2) cout<<"Joe"<<endl;
            else cout<<"Mike"<<endl;
       }
    }
    return 0;
}