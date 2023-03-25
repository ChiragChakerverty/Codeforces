#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        if(n==1) cout<<-1<<endl;
        else
        {
            cout<<2;
            n--;
            while(n--) cout<<3;
            cout<<endl;
        }
    }
    return 0;
}