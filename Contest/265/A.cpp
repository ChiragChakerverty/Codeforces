#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int pos=1;
    for(int i=0,j=0;i<t.size();i++)
    {
        if(t[i]==s[j])
        {
        pos++;
        j++;
        }
    }
    cout<<pos<<endl;
    return 0;
}