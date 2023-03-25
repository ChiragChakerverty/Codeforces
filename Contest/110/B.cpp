#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1000003;



int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n; cin>>n;
   string ideal="abcd";
   int q=n/4;
   int rem=n%4;
   while(q!=0)
   {
      cout<<ideal;
      q--;
   }
   for(int i=0;i<rem;i++) cout<<ideal[i];
   return 0;
}