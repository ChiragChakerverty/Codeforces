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
        string s; cin>>s;
        if((int(s[0])+int(s[1])+int(s[2]))==((int(s[3]))+int(s[4]))+int(s[5])) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}