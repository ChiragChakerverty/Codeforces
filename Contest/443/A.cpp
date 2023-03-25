#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    set<char> q;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z') q.insert(s[i]);
    }
    cout<<q.size()<<endl;
    return 0;
}