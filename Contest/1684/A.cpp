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
    while (t--)
    {
       ll n; cin>>n;
       vector<int> v;
       while(n>0)
       {
           ll rem=n%10;
           v.push_back(rem);
           n=n/10;
       }
       if(v.size()==2) cout<<v[0]<<endl;
       else cout<<*min_element(v.begin(),v.end())<<endl;
    }
    return 0;
}

// abbba