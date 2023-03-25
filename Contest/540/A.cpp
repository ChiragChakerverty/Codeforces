#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    int moves=0;
    for(int i=0;i<n;i++)
    {
        if(abs(s1[i]-s2[i])<=5)
        {
            moves=moves+abs(s1[i]-s2[i]);
        }
        else if(abs(s1[i]-s2[i])>5)
        {
            moves=moves+10-abs(s1[i]-s2[i]);
        }
    }
    cout<<moves<<endl;
    return 0;
}