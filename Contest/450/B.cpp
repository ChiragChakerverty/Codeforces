#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;


const ll mod=1e9+7;


int main()
{
    ll x,y; cin>>x>>y;
        ll n; cin>>n;
        ll ans=0;
        ll count=0;
        if(n==1) ans=x;
        else if(n==2) ans=y;
        else 
        {
            ll rem=n%3;
            count=n/3;
            if(rem==0)
            {   
                if(count%2==0) ans=((-1)*(y-x));
                else ans=(y-x);
            }
            else if(rem==1)
            {
                if(count%2==0) ans=x;
                else ans=(-1*x);
            }
            else if(rem==2)
            {   
                //cout<<"yes"<<endl;
                if(count%2==0) ans=y;
                else ans=(-1*y);
            }
            
        }
    
        ll fin_ans=ans;
        if(ans<0) fin_ans=mod+ans;
        while(fin_ans<0) fin_ans=fin_ans+mod;
        if(fin_ans>mod) fin_ans=fin_ans-mod;
        cout<<fixed<<fin_ans<<endl;
   return 0;
}