#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int upvotes=0;
        int n; cin>>n;
        while(n--)
        {
            int r; cin>>r;
            if(r==1 || r==3) upvotes++;
        }
        cout<<upvotes<<endl;
    }
    return 0;
}