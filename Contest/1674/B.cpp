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
       map<char,int> m;
       char c='a';
       int ans=0;
       for(int i=1;i<=26;i++)
       {
           m.insert({c,i});
           c++;
       }
       for(auto it=m.begin();it!=m.end();++it)
       {
           if(it->first==s[0])
           {    
               //cout<<it->second<<endl;
               ans=ans+((it->second)-1)*25;
               //cout<<ans<<endl;
               for(auto bt=m.begin();bt!=m.end();++bt)
               {
                   if(bt->first==s[1])
                   {    
                       //cout<<bt->second<<endl;
                       ans=ans+bt->second;
                       //cout<<ans<<endl;
                   }
               }
               break;
           }
       }
       if(int(s[1])>int(s[0])) ans--;
       cout<<ans<<endl;
    }
    return 0;
}