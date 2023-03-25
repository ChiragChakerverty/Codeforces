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
        int a,b; cin>>a>>b;
        int c=b;
        int d=a;
        vector<int> v;
        int ans=0;
        if(a<b) ans=1;
        else if(a==b) ans=2;
        else 
        {
            for(int i=0;i<=30;i++)
            {   
                b=b+i;
                if(b==1) continue;
                int count=i;
                while(a>0)
                {
                    a=a/b;
                    count++;
                }
                v.push_back(count);
                b=c;
                a=d;
            }
            ans=*min_element(v.begin(),v.end());
        }
        //for(int i=0;i<v.size();i++) cout<<v[i]<<" "; 
        cout<<ans<<endl;
    }
    return 0;
}