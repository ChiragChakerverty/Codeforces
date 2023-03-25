#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {   
       int n,m; cin>>n>>m;
       int row1=m;
       int b=m;
       cout<<"W";
       row1=row1-1;
       while(row1--) cout<<"B";
       cout<<endl;
       n=n-1;
       while(n--)
       {    
           m=b;
           while(m--) cout<<"B";
           cout<<endl;
       }
    }
    return 0;
}