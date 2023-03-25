#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin>>s;
    string space=" ";
    for(int i=0;i<s.size();i++)
    {
        if(s.substr(i,3)=="WUB") 
        {
            s.erase(i,3);
            s.insert(i,space);
            i=-1;
        }
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==32)
        {
            s.erase(i,1);
            i=-1;
        }
        else if(s[i]!=32) break;
    }
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==32)
        {
            s.erase(i,1);
            i=-1;
        }
        else if(s[i]!=32) break;
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}