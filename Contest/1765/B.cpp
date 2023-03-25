
#include <bits/stdc++.h>
using namespace std;

#define Chirag ios_base::sync_with_stdio(false); cin.tie(NULL);

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

#define int long long

const ll mod = 1e9 + 7;


int32_t main()
{
   Chirag
   ll t;
   cin >> t;
   while(t--)
   {
      int n; cin>>n;
      string s; cin>>s;
      int flag=1;
      if(n%3==2) cout<<"NO"<<endl;
      else 
      {
        for(int i=1;i<n;i++)
        {
            char check=s[i];
            if(s[i]==s[i+1])
            {
                i=i+2;
                continue;
            }
            else 
            {
                flag=0;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
      }
      
   }
   return 0;
}