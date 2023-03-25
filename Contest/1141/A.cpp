#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1e9 + 7;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   ull n,m; cin>>n>>m;
   int count=0,d=0;
   if(m%n!=0)
   {
      cout<<-1<<endl;
      return 0;
   }
   else 
   {
     d=m/n;
     while(d>1)
     {
        if(d%3==0)
        {
           d=d/3;
           count++;
        }
        else if(d%2==0)
        {
           d=d/2;
           count++;
        }
        else break;
     }
   }
   if(d==1) cout<<count<<endl;
   else cout<<-1<<endl;
   return 0;
}