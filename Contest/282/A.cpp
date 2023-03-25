#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s[n];
    int ans=0;
    for(int i=0;i<n;i++) cin>>s[i];
    for(int i=0;i<n;i++)
    {
        if(s[i][0]=='+')
        ans++;
        else if(s[i][0]=='-')
        ans--;
        else if(s[i][0]=='X' && s[i][1]=='+')
        ans++;
        else if(s[i][0]=='X' && s[i][1]=='-')
        ans--;
    }
    cout<<ans<<endl;
    return 0;
}