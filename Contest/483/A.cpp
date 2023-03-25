#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ull l,r; cin>>l>>r;
    if(r-l<2) cout<<-1<<endl;
    else if(r-l>2)
    {
        if(l%2==0) cout<<l<<" "<<l+1<<" "<<l+2<<endl;
        else if(l%2) cout<<l+1<<" "<<l+2<<" "<<l+3<<endl;
    }
    else if(r-l==2) 
    {
        if(l%2) cout<<-1<<endl;
        else cout<<l<<" "<<l+1<<" "<<l+2<<endl;
    }
    return 0;
}