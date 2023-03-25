#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        if(s.size()%2) cout<<"NO"<<endl;
        else 
        {
            int a=s.size()/2;
            if(s.substr(0,a)==s.substr(a,a)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}