#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1000003;



int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n,k; cin>>n>>k;
   if(n==k)
   {
      cout<<-1<<endl; return 0;
   }
   cout<<n-k<<" ";
   for(int i=1;i<=n;i++)
   {  
      if(i!=n-k)
      cout<<i<<" ";
   }
   return 0;
}