#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1000003;



int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int d; cin>>d;
   int n; cin>>n;
   int months[n];
   for(int i=0;i<n;i++) cin>>months[i];
   int ans=0;
   for(int i=0;i<n-1;i++) ans=ans+(d-months[i]);
   cout<<ans<<endl;
   return 0;
}