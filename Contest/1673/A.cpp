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
       for(int i=1;i<=26;i++)
       {
           m.insert({c,i});
           c++;
       }
       int alice=0,bob=0;
       int n=s.size();
       for(int i=0;i<n;i++)
       {
           for(auto it=m.begin();it!=m.end();++it)
           {
               if(it->first==s[i])
               {
                   alice=alice+it->second;
                   break; 
               }
           }
       }
       if(n%2)
       {    
           int haha=0;
           int haha2=0;
           for(auto it=m.begin();it!=m.end();++it)
           {
               if(it->first==s[0])
               {
                   haha=it->second;
                   break; 
               }
           }
           for(auto it=m.begin();it!=m.end();++it)
           {
               if(it->first==s[n-1])
               {
                   haha2=it->second;
                   break; 
               }
           }
           int count=min(haha,haha2);
           alice=alice-count;
           bob=bob+count;
       }
       int ans=abs(alice-bob);
       if(alice>bob) cout<<"Alice"<<" "<<ans<<endl;
       else cout<<"Bob"<<" "<<ans<<endl;
    }
    return 0;
}