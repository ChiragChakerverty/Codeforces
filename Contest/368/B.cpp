#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1000003;



int main()
{  
   int n,m; cin>>n>>m;
   int arr[n];
   unordered_set<int> s;
   int hash[n+1];
   for(int i=0;i<n;i++) cin>>arr[i];
   for(int i=n-1,j=1;i>=0;i--,j++)
   {  
     // cout<<arr[i]<<" ";
      s.insert(arr[i]);
      int k=s.size();
      //cout<<k<<" ";
      hash[j]=k;
      //cout<<hash[j]<<endl;
   }
   //for(int i=1;i<n+1;i++) cout<<hash[i]<<" ";
   //for(auto it=s.begin();it!=s.end();++it) cout<<*it<<" ";
   reverse(hash+1,hash+n+1);
   while(m--)
   {
      int t; cin>>t;
      cout<<hash[t]<<endl;
   }
   return 0;
}