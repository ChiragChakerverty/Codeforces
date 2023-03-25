#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int count=0;
    char c=s[s.size()-1];
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==c)
        count++;
    }
    for(int i=0;i<count;i++)
    cout<<c;
    return 0;
}