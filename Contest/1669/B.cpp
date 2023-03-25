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
       int n; cin>>n;
       map<int,int> m;
       for(int i=0;i<n;i++)
       {
           int x; cin>>x;
           m[x]++;
       }
       int flag=0;
       for(auto it=m.begin();it!=m.end();++it)
       {
           if(it->second>=3)
           {
               flag=1;
               cout<<it->first<<endl;
               break;
           }
       }
       if(flag==0) cout<<-1<<endl;
    }
    return 0;
}