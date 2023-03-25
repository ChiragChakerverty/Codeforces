#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,k; cin>>n>>m>>k;
    int players[m+1];
    int friends=0;
    for(int i=0;i<m+1;i++) cin>>players[i];
    for(int i=0;i<m;i++)
    {   
        int a=(players[i]^players[m]);
        bitset<32> t(a);
       int count=0;
        for(int i=0;i<32;i++) if(t[i]==1) count++;

        if(count<=k) friends++;
    }
    cout<<friends<<endl;
    return 0;
}