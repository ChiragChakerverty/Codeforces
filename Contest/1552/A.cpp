#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        string x=s;
        int k=0;
        sort(x.begin(),x.end());
        for(int i=0;i<n;i++)
        {
            if(s[i]!=x[i]) k++;
        }
        cout<<k<<endl;
    }
}