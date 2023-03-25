#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a==0 && b==0) cout<<0<<" "<<0<<endl;
    else if(a==0 && b!=0) cout<<0<<" "<<b/2<<endl;
    else if(b==0 && a!=0) cout<<0<<" "<<a/2<<endl;
    else
    {
        int f=min(a,b);
        cout<<f<<" ";
        int m=max(a,b);
        cout<<(m-f)/2<<endl;
    }
    return 0;
}