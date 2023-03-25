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
    while (t--)
    {
        string s; cin>>s;
        if((s.size()%2!=1) && (s[0]!=')') && (s[s.size()-1]!='(')) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}