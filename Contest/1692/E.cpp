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
        int n,s; cin>>n>>s;
        int sum=0;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            sum=sum+x;
            v.push_back(x);
        }
        int ans=0;
        if(sum==s)  ans=0;
        else if(sum<s) ans=-1;
        else 
        {
            int i=0,j=0,max=-1;
            int haha=v[0];
            while(j<n)
            {
                if(haha<s)
                {
                    j++;
                    haha=haha+v[j];
                }
                else if(haha==s)
                {
                    if((j-i+1)>max) max=j-i+1;
                    j++;
                    haha=haha+v[j];
                }
                else if(haha>s)
                {
                    haha=haha-v[i];
                    i++;
                }
            }
            ans=n-max;
        }
        cout<<ans<<endl;
    }
    return 0;
}