#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a; cin>>a;
        int b;
        float c;
        b=360/(180-a);
        c=360/(180-float(a));
        if(b==c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}