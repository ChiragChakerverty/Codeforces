#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod=1e9+7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
      int a1,b1; cin>>a1>>b1;
      int a2,b2; cin>>a2>>b2;
      if(a1!=a2 && a1!=b2 && b1!=a2 && b1!=b2) cout<<"No"<<endl;
      else 
      {
          if(a1==a2 && b1+b2==a1) cout<<"Yes"<<endl;
          else if(a1==b2 && a2+b1==a1) cout<<"Yes"<<endl;
          else if(b1==a2 && a1+b2==b1) cout<<"Yes"<<endl;
          else if(b1==b2 && a1+a2==b1) cout<<"Yes"<<endl;
          else cout<<"No"<<endl; 
      }
    }
    return 0;
}