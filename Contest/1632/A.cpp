#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
       int n; cin>>n;
       string s; cin>>s;
       if(n==1) cout<<"YES"<<endl;
       else if(n==2)
       {
           if(s=="10" || s=="01") cout<<"YES"<<endl;
           else cout<<"NO"<<endl;  
       }
       else cout<<"NO"<<endl;
       
    }
    return 0;
}