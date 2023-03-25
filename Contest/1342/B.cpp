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
       string t; cin>>t;
       string s=""; 
       int count_0=0,count_1=0;
       for(int i=0;i<t.size();i++)
       {
           if(t[i]=='1') count_1++;
           else if(t[i]=='0') count_0++;
       }
       if(count_0==0 || count_1==0) s=s+t;
       else 
       {
           for(int i=0;i<t.size();i++) s=s+"01";
       }
       cout<<s<<endl;
    }
    return 0;
}