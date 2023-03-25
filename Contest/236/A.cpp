#include<bits/stdc++.h>

using namespace std;

int main()
{
    int count;
    string s;
    cin>>s;
    count=s.size();
    for(int i=0;i<s.size();i++)
    {
        for(int j=i+1;j<s.size();j++)
        {
            if(s[i]==s[j])
            {
            count--;
            break;
            }
        }
    }
    if(count%2==1)
    cout<<"IGNORE HIM!"<<endl;
    else 
    cout<<"CHAT WITH HER!"<<endl;

    return 0;
}