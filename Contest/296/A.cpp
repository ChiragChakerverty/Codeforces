#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin>>n;
    int hash[1001]={0};
    for(int i=0;i<n;i++)
    {
        int t; cin>>t;
        hash[t]++;
    }
    sort(hash,hash+1001);
    reverse(hash,hash+1001);
    if(hash[0]>ceil(n/2.0)) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}