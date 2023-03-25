#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
typedef unsigned long long int ull;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k; cin>>k;
    int hash[10]={0};
    for(int i=0;i<4;i++)
    {
        for(int i=0;i<4;i++)
        {
            char c; cin>>c;
            if(c!=0)
            {
                hash[c-'0']++;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        if(hash[i]>2*k)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}