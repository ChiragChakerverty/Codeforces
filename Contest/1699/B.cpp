#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

#define int long long

const ll mod = 1e9 + 7;



int32_t main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   ll t;
   cin >> t;
   while (t--)
   {
      string s1="10011001100110011001100110011001100110011001100110011001100110011001100110011001";
      string s2="01100110011001100110011001100110011001100110011001100110011001100110011001100110";
      string s3=s2;
      string s4=s1;
      int n,m; cin>>n>>m;
      int row=1;
      while(row<=n)
      {
         if(row%4==1)
         {
            for(int i=0;i<m;i++) cout<<s1[i]<<" ";
            cout<<endl;
         }
         else if(row%4==2)
         {
            for(int i=0;i<m;i++) cout<<s2[i]<<" ";
            cout<<endl;
         }
         else if(row%4==3)
         {
            for(int i=0;i<m;i++) cout<<s3[i]<<" ";
            cout<<endl;
         }
         else if(row%4==0)
         {
            for(int i=0;i<m;i++) cout<<s4[i]<<" ";
            cout<<endl;
         }
         row++;
      }
   }
   return 0;
}