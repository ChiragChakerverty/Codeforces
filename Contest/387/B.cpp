#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,m;
    cin>>n>>m;
     vector <int> a(n);
     vector <int> b(m);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    
    int pos = 0;
    for (int  i = 0; i < n; i++)
    {
         auto it = lower_bound(b.begin(),b.end(),a[i]);
         
         if (it == b.end())
         {
             
             break;
         }
         else
         {
             *it = 0;
             sort(b.begin(),b.end());
         }
         pos++;
         
    }
    cout<<n-pos<<endl;
    
 
    return 0;
}