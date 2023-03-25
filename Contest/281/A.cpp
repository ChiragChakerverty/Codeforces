#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    if(s[0]>=97 && s[0]<=122)
    s[0]=s[0]-32;

    for(int i=0;i<s.size();i++)
    cout<<s[i];
    return 0;
}