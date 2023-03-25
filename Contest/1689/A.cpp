#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

#define int long long

const ll mod = 1e9 + 7;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
       int n,m,k; cin>>n>>m>>k;
       string a,b;
       cin>>a>>b;
       sort(a.begin(),a.end());
       sort(b.begin(),b.end());
       string c="";
       int op=k;
       int k_a=k,k_b=k;
       for(int i=0,j=0;i<n,j<m;)
       {    
            if(i==n || j==m) break;
            if((a[i]<b[j]) && k_a!=0)
            {
                c=c+a[i];
                i++;
                k_a--;
                k_b=k;
            }
            else if(a[i]>b[j] && k_b!=0)
            {
                c=c+b[j];
                j++;
                k_b--;
                k_a=k;
            }
            else if(k_a==0 && k_b!=0)
            {
                c=c+b[j];
                j++;
                k_b--;
                k_a=k;
            }
            else if(k_b==0 && k_a!=0)
            {
                c=c+a[i];
                i++;
                k_a--;
                k_b=k;
            }
       }
       cout<<c<<endl;
    }
    return 0;
}