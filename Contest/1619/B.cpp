#include<bits/stdc++.h>

using namespace std;

int main()
{   
    int t; cin>>t;
    while(t--)
    {
        long long int n; cin>>n;
        int sq=sqrt(n);
        int cube=cbrt(n);
        int common=sqrt(cbrt(n));
        cout<<(sq+cube-common)<<endl;
    }
    return 0;
}