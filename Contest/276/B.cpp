#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1e9 + 7;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   string s; cin>>s;
   map<char,int> m;
   for(int i=0;i<s.size();i++)
   {
      m[s[i]]++;
   }
   int count_odd_freq=0;
   for(auto it=m.begin();it!=m.end();++it)
   {
      if((it->second)%2) count_odd_freq++;
   }
   if (count_odd_freq==0) cout<<"First"<<endl;
   else if(count_odd_freq%2) cout<<"First"<<endl;
   else cout<<"Second"<<endl;
   return 0;
}