#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int count_a=0,count_b=0,count_c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A') count_a++;
            else if(s[i]=='B') count_b++;
            else if(s[i]=='C') count_c++;
        }
        if(count_b-count_a==count_c) cout<<"YES"<<endl;
        else  cout<<"NO"<<endl;
    }
    return 0;
}