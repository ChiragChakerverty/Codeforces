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
       ll n; cin>>n;
       int x=log2(n-1);
       int skip=pow(2,x);
    //    cout<<0<<" "<<skip<<" ";
    //    if(n>2)
    //    {
    //        for(int i=1;i<=n-1;i++)
    //        {
    //            if(i!=skip) cout<<i<<" ";
    //        }
    //    }
       for(int i=1;i<skip;i++) cout<<i<<" ";
       cout<<0<<" "<<skip<<" ";
       for(int i=skip+1;i<=n-1;i++) cout<<i<<endl;
       cout<<endl;
    }
    return 0;
}