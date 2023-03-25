#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1e9 + 7;

int main()
{
    ull n,m; cin>>n>>m;
    vector<ull> rooms(n);
    for(ull i=0;i<n;i++) cin>>rooms[i];
    vector<ull> hash(n);
    hash[0]=rooms[0];
    for(ull i=1;i<n;i++) hash[i]=rooms[i]+hash[i-1];
    ull sum=0;
    ull c=0;
    for(ull i=0;i<m;i++)
    {
        ull temp; cin>>temp;
        if(temp<=hash[c])
        {   
            if(c!=0) temp=temp-hash[c-1];
            cout<<c+1<<" "<<temp<<endl;
        }
        else 
        {
            c++;
            while(temp>hash[c]) c++;
            cout<<c+1<<" "<<temp-hash[c-1]<<endl;
        }
    }
    return 0;
}