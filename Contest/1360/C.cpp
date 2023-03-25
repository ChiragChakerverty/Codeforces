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
        int n; cin>>n;
        vector<int> v;
        int odd=0,even=0;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x; 
            v.push_back(x);
            if(x%2) odd++;
            else even++;
        }
        if((even%2==1 && odd%2==0) ||(even%2==0 && odd%2==1)) 
        {
            cout<<"NO"<<endl;
            continue; 
        }
        else 
        {
            if(odd%2==0 && even%2==0)
            {
                cout<<"YES"<<endl;
                continue; 
            }
            else 
            {   
                sort(v.begin(),v.end());
                int flag=1;
                for(int i=0;i<n-1;i++)
                {
                    if(abs(v[i+1]-v[i])==1)
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag) cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}