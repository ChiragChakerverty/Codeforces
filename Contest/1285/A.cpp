#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
int main()
{
    ll n; cin>>n;
    string s; cin>>s;
    ll left=0,right=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='L') left--;
        else if(s[i]=='R') right++;
    }
    cout<<abs(left)+right+1<<endl;
    return 0;
}