#include<bits/stdc++.h>

using namespace std;

int main()
{
    char c; cin>>c;
    string s; cin>>s;
    string s1="qwertyuiopasdfghjkl;zxcvbnm,./";
    if(c=='R')
    {
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<s1.size();j++)
            {
                if(s[i]==s1[j])
                {
                    cout<<s1[j-1];
                    break;
                }
            }
        }
    }
    if(c=='L')
    {
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<s1.size();j++)
            {
                if(s[i]==s1[j])
                {
                    cout<<s1[j+1];
                    break;
                }
            }
        }
    }
    return 0;

}