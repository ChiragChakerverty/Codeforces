#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int k=1;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            k++;
            if(k==7) 
            {
                cout<<"YES"<<endl;
                break;
            }
        }
        else k=1;
    }
    if(k<7) cout<<"NO"<<endl;
    return 0;
}