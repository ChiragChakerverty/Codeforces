#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1000003;



int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   float a,b,c,d; cin>>a>>b>>c>>d;
   float x=a*d;
   float y=(b*c)+(a*d)-(a*c);
   float ans=x/y;
   cout<<ans<<endl;
   return 0;
}