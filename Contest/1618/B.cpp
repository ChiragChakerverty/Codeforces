#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int num=n;
        string s; cin>>s;
        n=n-3;
        while(n--)
        {   
            string t; cin>>t;
            if(s.back()==t.front())
            {
                s=s+t.back();
            }
            else s=s+t;
        }
        if(s.size()==num) cout<<s<<endl;
        else 
        {
            s=s+"a";
            cout<<s<<endl;
        }
    }
    return 0;
}