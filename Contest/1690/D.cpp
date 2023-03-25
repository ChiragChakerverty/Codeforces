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
       ll n,k; cin>>n>>k;
       string s; cin>>s;
       vector<ll> ans;
       int count_b=0;
       for(int i=0;i<k;i++)
       {
           if(s[i]=='B') count_b++;
       }    
       int haha=k-count_b;
       ans.push_back(haha);
       for(int i=k,j=0;i<s.size();i++,j++)
       {
           if(s[i]=='B') count_b++;
           if(s[j]=='B') count_b--;
           haha=k-count_b;
           ans.push_back(haha);
       }
       int sol=*min_element(ans.begin(),ans.end());
       cout<<sol<<endl;
    }
    return 0;
}