#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    int count=0;
    char c;
    for(int i=1;i<=n;i++)
    {
        c=s[i];
        if(s[i-1]==c)
        count++;
    }
    cout<<count<<endl;
    return 0;
}