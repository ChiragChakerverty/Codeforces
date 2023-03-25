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
       int n=s.size();
       vector<int> v;
       v.push_back(0);
       for(int i=0;i<n;i++)
       {
           if(s[i]=='R') v.push_back(i+1);
       }
       v.push_back(n+1);
       int max_diff=1;
       for(int i=1;i<v.size();i++)
       {
           if(abs(v[i]-v[i-1])>max_diff) max_diff=abs(v[i]-v[i-1]);
       }
       cout<<max_diff<<endl;
    }
    return 0;
}