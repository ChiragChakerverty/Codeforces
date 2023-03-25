#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<char> v(10);
    for(int i=0;i<10;i++) cin>>v[i];
    for(int i=0;i<10;i++)
    {
        if(v[i]==s[0] || v[i]==s[1])
        {
            cout<<"YES"<<endl;
            break;
        }
        else if(i==9) cout<<"NO"<<endl;
    }
    return 0;
}