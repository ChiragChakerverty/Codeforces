#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        int n=s.size();
        if(n==1) cout<<s<<endl;
        int flag=0;
        int pos=0;
        int lol=0;
        for(int i=n-1;i>0;i--)
        {
            int k=(s[i]-'0')+(s[i-1]-'0');
            if(k>9)
            {
                pos=i-1;
                flag++;
                lol=k;
                break;
            }
        }
        if(flag)
        {
            for(int i=0;i<pos;i++) cout<<s[i];
            cout<<lol;
            for(int i=pos+2;i<n;i++) cout<<s[i];
            cout<<endl;
        }
        else 
        {
            int k=(s[0]-'0')+(s[1]-'0');
            cout<<k;
            for(int i=2;i<n;i++) cout<<s[i];
            cout<<endl;
        }
    }
    return 0;
}