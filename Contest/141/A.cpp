#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1.size()+s2.size()!=s3.size())
    {
        cout<<"NO"<<endl;
        return 0;
    }
    
    string s4=s1+s2;
    sort(s4.begin(),s4.end());
    sort(s3.begin(),s3.end());
    if(s3==s4) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}