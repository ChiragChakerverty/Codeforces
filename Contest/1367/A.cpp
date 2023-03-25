#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        string b; cin>>b;
        cout<<b[0];
        for(int i=1;i<b.size()-1;i++)
        {
            if(b[i]==b[i+1])
            {
                cout<<b[i];
                i++;
            }
        }
        cout<<b[b.size()-1];
        cout<<endl;
    }
    return 0;
}