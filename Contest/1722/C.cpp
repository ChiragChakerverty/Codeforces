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
      int score1=0,score2=0,score3=0;
      vector<string> v;
      map<string,int> m;
      for(int i=0;i<3*n;i++)
      {
         string s; cin>>s;
         v.push_back(s);
         m[s]++;
      }
      for(int i=0;i<n;i++)
      {
         auto it=m.find(v[i]);
         if(it->second==1) score1=score1+3;
         else if(it->second==2) score1=score1+1;
         else continue; 
      }
      for(int i=n;i<2*n;i++)
      {
         auto it=m.find(v[i]);
         if(it->second==1) score2=score2+3;
         else if(it->second==2) score2=score2+1;
         else continue; 
      }
      for(int i=2*n;i<3*n;i++)
      {
         auto it=m.find(v[i]);
         if(it->second==1) score3=score3+3;
         else if(it->second==2) score3=score3+1;
         else continue; 
      }
      cout<<score1<<" "<<score2<<" "<<score3<<endl;
   }
   return 0;
}















// for(int i=0;i<n;i++)
//       {
//          int freq=count(v.begin(),v.end(),v[i]);
//          if(freq==1) score1=score1+3;
//          else if(freq==2) score1++;
//          else continue;
//       }
//       for(int i=n;i<2*n;i++)
//       {
//          int freq=count(v.begin(),v.end(),v[i]);
//          if(freq==1) score2=score2+3;
//          else if(freq==2) score2++;
//          else continue;
//       }
//       for(int i=2*n;i<3*n;i++)
//       {
//          int freq=count(v.begin(),v.end(),v[i]);
//          if(freq==1) score3=score3+3;
//          else if(freq==2) score3++;
//          else continue;
//       }
//       cout<<score1<<" "<<score2<<" "<<score3<<endl;