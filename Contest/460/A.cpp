#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m; cin>>n>>m;
    int days=0;
    int loop_count=0;
    for(int i=n;i>0;i--)
    {   
        days++;
        loop_count++;
        if(loop_count==m)
        {
            i++;
            loop_count=0;
        }
    }
    cout<<days<<endl;
    return 0;
}