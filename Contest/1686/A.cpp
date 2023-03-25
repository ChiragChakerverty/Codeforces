#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

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
       int sum=0;
       for(int i=0;i<n;i++)
       {    
           int x; cin>>x;
           sum=sum+x;
           v.push_back(x);
       }
       if(sum%n!=0) 
       {
           cout<<"NO"<<endl;
           continue;
       }
       int check=sum/n;
       auto it=find(v.begin(),v.end(),check);
       if(it==v.end()) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
    }
    return 0;
}