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
       string s; cin>>s;
       int flag=1;
       for(int i=0;i<s.size();i++)
       {
           int count=1;
           char c=s[i];
           int j=0;
           for(j=i+1;j<s.size();j++)
           {
               if(s[j]==c) count++;
               else break;
           }
          //cout<<count<<endl;
           i=j-1;
           if(count>1) continue;
           else
           {
               flag=0;
               break;
           }
       }
       if(flag) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}