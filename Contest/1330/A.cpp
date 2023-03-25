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
        int n,x; cin>>n>>x;
        set<int> s;
        for(int i=0;i<n;i++)
        {
            int q; cin>>q;
            s.insert(q);
        }
        int i=1;
        while(true)
        {
            int siz=s.size();
            s.insert(i);
            if(s.size()>siz)
            {
                x--;
                if(x==0) break;
            }
            i++;
        }
        //for(auto bt: s) cout<<bt<<" ";

        auto it=s.begin();
        auto it2=s.begin();
        ++it2;
        
        for(int i=0;i<int(s.size())-1;i++,++it,++it2)
        {   
            //cout<<*it<<" "<<*it2<<endl;
            if((*it2-*it)!=1) break;

        }
        cout<<*it<<endl;

    }
        
    return 0;
}