#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--)
    {
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                s[i]='G';
                s[i+1]='B';
                i++;
            }
        }
    }
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i];
    }

    return 0;
}