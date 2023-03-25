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
   while(n!=1)
   {
      cout<<n<<" ";
      for(int i=2;i<=n;i++)
      {
         if(n%i==0)
         {
            n=n/i;
            break;
         }
      }
   }
   cout<<n<<endl;
}