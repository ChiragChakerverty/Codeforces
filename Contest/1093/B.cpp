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
        set<char> q(s.begin(),s.end());
        if(q.size()==1) cout<<-1<<endl;
        else 
        {
            sort(s.begin(),s.end());
            cout<<s<<endl;
        }
    }
    return 0;
}