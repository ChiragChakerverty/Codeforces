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
        string s; cin>>s;
        int n=s.size();
        if(n==1 || n==2) cout<<0<<endl;
        else{
        ll count_0=0,count_1=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0') count_0++;
            else count_1++;
        }
        //cout<<count_0<<" "<<count_1<<endl;
        if(count_0==count_1) cout<<(count_1-1)<<endl;
        else if(count_0!=count_1) cout<<min(count_1,count_0)<<endl;}
    }
    return 0;
}