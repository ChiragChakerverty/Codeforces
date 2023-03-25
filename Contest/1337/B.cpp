#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, n, m;
        cin >> x >> n >> m;
        while(x>0)
        {
            int a=x;
            if((a>20 && n>0) || (m==0 && n!=0)) 
            {
                x=(x/2)+10;
                n--;
                //cout<<x<<" ";
                if(x<0) break;
            }
            else if(a>x-10 && m>0)
            {
                x=x-10;
                m--;
            }
            if(n==0 && m==0) break;
        }
        if(x<=0) cout<<"YES"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}