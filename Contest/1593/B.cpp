#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;


const ll mod=1e9+7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        int n=s.size();
        int ans=n;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int num=(s[i]-'0')*10+(s[j]-'0');
                if(num%25==0)
                {
                    ans=min(ans,(j-i-1)+(n-1-j));
                }
            }
        }
        cout<<ans<<endl;
    }
        
    return 0;
}