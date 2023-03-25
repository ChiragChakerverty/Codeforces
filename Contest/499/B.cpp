#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m; cin>>n>>m;
    string a[m],b[m];
    for(int i=0;i<m;i++)
    {
        cin>>a[i]>>b[i];
    }
    string s[n];
    for(int i=0;i<n;i++) cin>>s[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i]==a[j] || s[i]==b[j])
            {
                if(a[j].size()>b[j].size()) s[i]=b[j];
                else s[i]=a[j];
                break;
            }
        }
    }
    for(int i=0;i<n;i++) cout<<s[i]<<" ";
    return 0;
}