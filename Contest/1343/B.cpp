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
       int n; cin>>n;
       if(n%4!=0) cout<<"NO"<<endl;
       else 
       {
            cout<<"YES"<<endl;
            int i=2;
            int count=0;
            int sum_even=0,sum_odd=0;
            while(i<=n)
            {
                cout<<i<<" ";
                sum_even=sum_even+i;
                i=i+2;
                count++;
            }
            int j=1;
            count--;
            while(count--)
            {   
                sum_odd=sum_odd+j;
                cout<<j<<" ";
                j=j+2;
            }
            cout<<(sum_even-sum_odd)<<endl;
       }
    }
    return 0;
}