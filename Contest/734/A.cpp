#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n; cin>>n;
    string s; cin>>s;
    long long int anton=0,danik=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A') anton++;
        else danik++;
    }
    if(anton>danik) cout<<"Anton"<<endl;
    else if(danik>anton) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
    return 0;
}