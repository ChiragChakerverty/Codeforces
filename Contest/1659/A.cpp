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
      int n,r,b; cin>>n>>r>>b;
      string s="";
      vector<int> count(b+1,(r/(b+1)));
      int rem=r%(b+1);
      for(int i=0;i<rem;i++) count[i]++;
      for(int i=0;i<count.size();i++)
      {
          while(count[i]--) s=s+"R";
          if(i!=count.size()-1)
          s=s+"B";
      }
      cout<<s<<endl;
    }
    return 0;
}