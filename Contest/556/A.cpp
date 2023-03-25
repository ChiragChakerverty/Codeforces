#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n; cin>>n;
    string s; cin>>s;
    long long int count_0=0,count_1=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0') count_0++;
        else if(s[i]=='1') count_1++;
    }
    long long int small=min(count_0,count_1);
    long long int ans=s.size()-(2*small);
    cout<<ans<<endl;
    return 0;
}