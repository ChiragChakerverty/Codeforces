#include <bits/stdc++.h>
#include <numeric>
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
       char c; cin>>c;
       vector<int> ans;
       for(int i=0;i<s.size();i++) 
       {
           if(s[i]==c)
           {
               int index=i+1;
               ans.push_back(index);
           }
       }
       int flag=0;
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]%2)
            {
                cout<<"YES"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0) cout<<"NO"<<endl;
    }
    return 0;
}