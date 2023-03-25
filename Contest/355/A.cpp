#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
typedef unsigned long long int ull;
 
int main()
{
    ull k,d; cin>>k>>d;
    if(d==0)
    {
        if(k==1) cout<<0<<endl;
        else cout<<"No solution"<<endl;
    }
    else 
    {
        string s="";
        k--;
        cout<<d;
        while(k--) s=s+'0';
        cout<<s<<endl;
    }
    return 0;
}