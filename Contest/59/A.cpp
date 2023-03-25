#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int upper_count=0,lower_count=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=97 && s[i]<=122)
        lower_count++;
        else if(s[i]>=65 && s[i]<=90)
        upper_count++;
    }

    if(upper_count>lower_count)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>=97 && s[i]<=122)
            s[i]=s[i]-32;
        }
        for(int i=0;i<s.size();i++)
        cout<<s[i];
    }
    else  
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>=65 && s[i]<=90)
            s[i]=s[i]+32;
        }
        for(int i=0;i<s.size();i++)
        cout<<s[i];
    }

    return 0;
}