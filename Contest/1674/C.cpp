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
       string t; cin>>t;
       string check=t;
       ll ans=0;
       sort(check.begin(),check.end());
       if(check.size()>1 && check[0]=='a')
       {
           ans=-1;
           cout<<ans<<endl;
           continue; 
       }
       
       if(t.size()==1 && t[0]=='a') ans=1;
       else
       {
           int n=s.size();
           ans=pow(2,n);
       }
       cout<<ans<<endl;
    }
    return 0;
}