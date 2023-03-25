#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++) if(s[i]>=97 && s[i]<=122) s[i]=s[i]-32;

    set<char> v(s.begin(),s.end());
    if(v.size()==26) cout<<"YES"<<endl;
    else  cout<<"NO"<<endl;
    return 0;
}