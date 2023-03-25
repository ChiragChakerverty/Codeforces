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
        string s=to_string(n);
        vector<int> v;
        int count=0;
        int k=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]!='0') 
            {
                k++;
                int x=(s[i]-'0')*pow(10,count);
                v.push_back(x);
            }
            count++;
        }
        cout<<k<<endl;
        for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}